#include "pch.h"

#if EFI_PROD_CODE && EFI_FILE_LOGGING

#include "ff.h"
#include "mmc_card_util.h"
#include "backup_ram.h"
#include "mmc_card.h"

#define LOG_INDEX_FILENAME "index.txt"

// 10 because we want at least 4 character name (is that about TS protocol which we do not use any more?)
#define MIN_FILE_INDEX 10
int logFileIndex = MIN_FILE_INDEX;

static FIL FDLogFile NO_CACHE;

void incLogFileName() {
	memset(&FDLogFile, 0, sizeof(FIL));						// clear the memory
	FRESULT ret = f_open(&FDLogFile, LOG_INDEX_FILENAME, FA_READ);				// This file has the index for next log file name

	char data[_MAX_FILLER];
	memset(data, 0, sizeof(data));

	if (ret == FR_OK) {
		UINT readed = 0;
		// leave one byte for terminating 0
		ret = f_read(&FDLogFile, (void*)data, sizeof(data) - 1, &readed);

		if (ret != FR_OK) {
			printError("log index file read", ret);
			logFileIndex = MIN_FILE_INDEX;
		} else {
			efiPrintf("Got content [%s] size %d", data, readed);
			logFileIndex = maxI(MIN_FILE_INDEX, atoi(data));
			if (absI(logFileIndex) == ATOI_ERROR_CODE) {
				logFileIndex = MIN_FILE_INDEX;
			} else {
				logFileIndex++; // next file would use next file name
			}
		}
		f_close(&FDLogFile);
	} else if (ret == FR_NO_FILE) {
		// no index file - this is not an error, just an empty SD
		logFileIndex = MIN_FILE_INDEX;
	} else {
		printError("log index file open", ret);
		efiPrintf("%s: not found or error: %d", LOG_INDEX_FILENAME, ret);
		logFileIndex = MIN_FILE_INDEX;
	}

	// truncate or create new
	ret = f_open(&FDLogFile, LOG_INDEX_FILENAME, FA_CREATE_ALWAYS | FA_WRITE);
	if (ret == FR_OK) {
		UINT writen = 0;
		size_t len = itoa10(data, logFileIndex) - data;
		ret = f_write(&FDLogFile, (void*)data, len, &writen);
		if ((ret != FR_OK) || (len != writen)) {
			printError("log index write", ret);
		}
		f_close(&FDLogFile);
	} else {
		printError("log index file write", ret);
	}

	efiPrintf("New log file index %d", logFileIndex);
}

bool needsToWriteReportFile() {
#if EFI_BACKUP_SRAM
extern ErrorCookie errorCookieOnStart;
  return errorCookieOnStart == ErrorCookie::HardFault;
#else
  return false;
#endif // EFI_BACKUP_SRAM
}

#endif // EFI_PROD_CODE && EFI_FILE_LOGGING
