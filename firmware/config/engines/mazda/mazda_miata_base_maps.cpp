/*
 * @file mazda_miata_base_maps.cpp
 *
 *  Created on: Dec 31, 2018
 * @author Andrey Belomutskiy, (c) 2012-2020
 */

#include "pch.h"

// todo: use these defaults wider? make them global defaults maybe?
static const float hardCodedcrankingFuelBins[8] = {-20.0, -10.0, 3.6799927, 22.77002, 34.049805, 49.95996, 65.0, 90.0};
static const float hardCodedcrankingFuelCoef[8] = {2.7999878, 2.2000122, 1.6900024, 1.2900009, 1.199997, 1.050003, 1.0, 1.0};

/* Generated by TS2C on Thu Jul 30 00:03:20 EDT 2020*/
void miataNA_setCrankingFuelBins() {
	copyArray(config->crankingFuelBins, hardCodedcrankingFuelBins);
	copyArray(config->crankingFuelCoef, hardCodedcrankingFuelCoef);
}

static const float hardCodediacCoastingRpmBins[16] = { 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500 };

static const float hardCodediacCoasting[16] = {40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0};

/* Generated by TS2C on Fri Jul 31 14:02:18 EDT 2020*/
void miataNA_setIacCoastingBins() {
#if CLT_CURVE_SIZE == 16
	copyArray(config->iacCoastingRpmBins, hardCodediacCoastingRpmBins);
	copyArray(config->iacCoasting, hardCodediacCoasting);
#endif // CLT_CURVE_SIZE
}

static const float hardCodedcltIdleCorrBins[16] = {-40.0, -30.0, -20.0, -10.0, 0.0, 9.439941, 19.120117, 30.810059, 42.509766, 54.529785, 64.21973, 71.90039, 80.0, 90.0, 100.0, 110.0};

static const float hardCodedcltIdleCorr[16] = {28.0, 26.40, 25.20, 24.19, 23.39, 21.0, 20.59, 20.39, 20.59, 20.39, 20.20, 20, 19.80, 19.80, 19.80, 19.80};

/* Generated by TS2C on Fri Jul 31 14:02:18 EDT 2020*/
void miataNA_setCltIdleCorrBins() {
#if CLT_CURVE_SIZE == 16
	copyArray(config->cltIdleCorrBins, hardCodedcltIdleCorrBins);
	copyArray(config->cltIdleCorr, hardCodedcltIdleCorr);
#endif // CLT_CURVE_SIZE
}

static const float hardCodedcltIdleRpmBins[16] = {-40.0, -30.0, -20.0, 0.0, 10.0, 20.0, 30.0, 40.0, 60.0, 70.0, 80.0, 90.0, 100.0, 120.0, 130.0, 140.0};

static const float hardCodedcltIdleRpm[16] = {1180.0, 1150.0, 1130.0, 1110.0, 1090.0, 1070.0, 1050.0, 1020.0, 990.0, 970.0, 950.0, 950.0, 950.0, 950.0, 950.0, 950.0};

/* Generated by TS2C on Fri Jul 31 14:02:18 EDT 2020*/
void miataNA_setCltIdleRpmBins() {
#if CLT_CURVE_SIZE == 16
	copyArray(config->cltIdleRpmBins, hardCodedcltIdleRpmBins);
	copyArray(config->cltIdleRpm, hardCodedcltIdleRpm);
#endif // CLT_CURVE_SIZE
}

static const float hardCodedignitionLoadBins[16] = {10.0, 24.0, 35.0, 55.0, 65.0, 75.0, 84.0, 99.0, 110.0, 125.0, 140.0, 160.0, 180.0, 200.0, 220.0, 250.0};

static const float hardCodedignitionRpmBins[16] = {500.0, 800.0, 1000.0, 1500.0, 1800.0, 2300.0, 2900.0, 3400.0, 3900.0, 4300.0, 4800.0, 5300.0, 5900.0, 6500.0, 7200.0, 8000.0};

static const uint8_t hardCodedignitionTable[16][16] = {
/* Generated by TS2C on Sun Aug 02 11:58:01 EDT 2020*/
{/* 0 10.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/20,	/* 3 1500.0*/21,	/* 4 1800.0*/32,	/* 5 2300.0*/33,	/* 6 2900.0*/34,	/* 7 3400.0*/35,	/* 8 3900.0*/37,	/* 9 4300.0*/37,	/* 10 4800.0*/38,	/* 11 5300.0*/38,	/* 12 5900.0*/38,	/* 13 6500.0*/39,	/* 14 7200.0*/40,	/* 15 8000.0*/41,	},
{/* 1 24.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/18,	/* 3 1500.0*/23,	/* 4 1800.0*/30,	/* 5 2300.0*/34,	/* 6 2900.0*/35,	/* 7 3400.0*/36,	/* 8 3900.0*/37,	/* 9 4300.0*/37,	/* 10 4800.0*/38,	/* 11 5300.0*/38,	/* 12 5900.0*/38,	/* 13 6500.0*/39,	/* 14 7200.0*/40,	/* 15 8000.0*/41,	},
{/* 2 35.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/18,	/* 3 1500.0*/23,	/* 4 1800.0*/30,	/* 5 2300.0*/33,	/* 6 2900.0*/34,	/* 7 3400.0*/35,	/* 8 3900.0*/35,	/* 9 4300.0*/35,	/* 10 4800.0*/36,	/* 11 5300.0*/36,	/* 12 5900.0*/37,	/* 13 6500.0*/37,	/* 14 7200.0*/38,	/* 15 8000.0*/39,	},
{/* 3 55.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/22,	/* 3 1500.0*/24,	/* 4 1800.0*/28,	/* 5 2300.0*/31,	/* 6 2900.0*/32,	/* 7 3400.0*/33,	/* 8 3900.0*/33,	/* 9 4300.0*/34,	/* 10 4800.0*/34,	/* 11 5300.0*/34,	/* 12 5900.0*/35,	/* 13 6500.0*/36,	/* 14 7200.0*/36,	/* 15 8000.0*/37,	},
{/* 4 65.000	*//* 0 500.0*/17,	/* 1 800.0*/17,	/* 2 1000.0*/22,	/* 3 1500.0*/24,	/* 4 1800.0*/28,	/* 5 2300.0*/30,	/* 6 2900.0*/32,	/* 7 3400.0*/32,	/* 8 3900.0*/32,	/* 9 4300.0*/32,	/* 10 4800.0*/33,	/* 11 5300.0*/33,	/* 12 5900.0*/33,	/* 13 6500.0*/34,	/* 14 7200.0*/35,	/* 15 8000.0*/36,	},
{/* 5 75.000	*//* 0 500.0*/18,	/* 1 800.0*/18,	/* 2 1000.0*/24,	/* 3 1500.0*/26,	/* 4 1800.0*/27,	/* 5 2300.0*/28,	/* 6 2900.0*/29,	/* 7 3400.0*/29,	/* 8 3900.0*/28,	/* 9 4300.0*/29,	/* 10 4800.0*/30,	/* 11 5300.0*/31,	/* 12 5900.0*/31,	/* 13 6500.0*/32,	/* 14 7200.0*/33,	/* 15 8000.0*/34,	},
{/* 6 84.000	*//* 0 500.0*/19,	/* 1 800.0*/19,	/* 2 1000.0*/24,	/* 3 1500.0*/27,	/* 4 1800.0*/27,	/* 5 2300.0*/27,	/* 6 2900.0*/28,	/* 7 3400.0*/28,	/* 8 3900.0*/27,	/* 9 4300.0*/28,	/* 10 4800.0*/29,	/* 11 5300.0*/30,	/* 12 5900.0*/31,	/* 13 6500.0*/32,	/* 14 7200.0*/32,	/* 15 8000.0*/33,	},
{/* 7 99.000	*//* 0 500.0*/19,	/* 1 800.0*/19,	/* 2 1000.0*/23,	/* 3 1500.0*/26,	/* 4 1800.0*/26,	/* 5 2300.0*/26,	/* 6 2900.0*/26,	/* 7 3400.0*/26,	/* 8 3900.0*/26,	/* 9 4300.0*/27,	/* 10 4800.0*/29,	/* 11 5300.0*/29,	/* 12 5900.0*/30,	/* 13 6500.0*/31,	/* 14 7200.0*/32,	/* 15 8000.0*/32,	},
{/* 8 110.000	*//* 0 500.0*/19,	/* 1 800.0*/19,	/* 2 1000.0*/23,	/* 3 1500.0*/26,	/* 4 1800.0*/26,	/* 5 2300.0*/25,	/* 6 2900.0*/26,	/* 7 3400.0*/26,	/* 8 3900.0*/25,	/* 9 4300.0*/26,	/* 10 4800.0*/27,	/* 11 5300.0*/28,	/* 12 5900.0*/29,	/* 13 6500.0*/29,	/* 14 7200.0*/30,	/* 15 8000.0*/31,	},
{/* 9 125.000	*//* 0 500.0*/17,	/* 1 800.0*/18,	/* 2 1000.0*/21,	/* 3 1500.0*/25,	/* 4 1800.0*/26,	/* 5 2300.0*/27,	/* 6 2900.0*/26,	/* 7 3400.0*/25,	/* 8 3900.0*/24,	/* 9 4300.0*/25,	/* 10 4800.0*/25,	/* 11 5300.0*/26,	/* 12 5900.0*/26,	/* 13 6500.0*/27,	/* 14 7200.0*/28,	/* 15 8000.0*/29,	},
{/* 10 140.000	*//* 0 500.0*/15,	/* 1 800.0*/17,	/* 2 1000.0*/20,	/* 3 1500.0*/24,	/* 4 1800.0*/26,	/* 5 2300.0*/26,	/* 6 2900.0*/25,	/* 7 3400.0*/24,	/* 8 3900.0*/24,	/* 9 4300.0*/24,	/* 10 4800.0*/24,	/* 11 5300.0*/24,	/* 12 5900.0*/24,	/* 13 6500.0*/24,	/* 14 7200.0*/25,	/* 15 8000.0*/24,	},
{/* 11 160.000	*//* 0 500.0*/13,	/* 1 800.0*/15,	/* 2 1000.0*/18,	/* 3 1500.0*/22,	/* 4 1800.0*/22,	/* 5 2300.0*/22,	/* 6 2900.0*/21,	/* 7 3400.0*/19,	/* 8 3900.0*/18,	/* 9 4300.0*/18,	/* 10 4800.0*/18,	/* 11 5300.0*/18,	/* 12 5900.0*/19,	/* 13 6500.0*/20,	/* 14 7200.0*/20,	/* 15 8000.0*/21,	},
{/* 12 180.000	*//* 0 500.0*/13,	/* 1 800.0*/15,	/* 2 1000.0*/17,	/* 3 1500.0*/19,	/* 4 1800.0*/21,	/* 5 2300.0*/21,	/* 6 2900.0*/20,	/* 7 3400.0*/18,	/* 8 3900.0*/16,	/* 9 4300.0*/16,	/* 10 4800.0*/16,	/* 11 5300.0*/17,	/* 12 5900.0*/17,	/* 13 6500.0*/17,	/* 14 7200.0*/17,	/* 15 8000.0*/17,	},
{/* 13 200.000	*//* 0 500.0*/14,	/* 1 800.0*/15,	/* 2 1000.0*/16,	/* 3 1500.0*/18,	/* 4 1800.0*/19,	/* 5 2300.0*/20,	/* 6 2900.0*/19,	/* 7 3400.0*/17,	/* 8 3900.0*/14,	/* 9 4300.0*/15,	/* 10 4800.0*/15,	/* 11 5300.0*/16,	/* 12 5900.0*/16,	/* 13 6500.0*/16,	/* 14 7200.0*/16,	/* 15 8000.0*/16,	},
{/* 14 220.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/15,	/* 3 1500.0*/16,	/* 4 1800.0*/18,	/* 5 2300.0*/19,	/* 6 2900.0*/18,	/* 7 3400.0*/16,	/* 8 3900.0*/14,	/* 9 4300.0*/14,	/* 10 4800.0*/15,	/* 11 5300.0*/15,	/* 12 5900.0*/15,	/* 13 6500.0*/15,	/* 14 7200.0*/15,	/* 15 8000.0*/15,	},
{/* 15 250.000	*//* 0 500.0*/15,	/* 1 800.0*/15,	/* 2 1000.0*/15,	/* 3 1500.0*/15,	/* 4 1800.0*/17,	/* 5 2300.0*/18,	/* 6 2900.0*/16,	/* 7 3400.0*/14,	/* 8 3900.0*/13,	/* 9 4300.0*/13,	/* 10 4800.0*/14,	/* 11 5300.0*/13,	/* 12 5900.0*/13,	/* 13 6500.0*/13,	/* 14 7200.0*/13,	/* 15 8000.0*/13,	}
};

/* Generated by TS2C on Sun Aug 02 11:58:01 EDT 2020*/
void miataNA_setIgnitionTable() {
#if (IGN_RPM_COUNT == 16) && (IGN_LOAD_COUNT == 16)
	copyArray(config->ignitionLoadBins, hardCodedignitionLoadBins);
	copyArray(config->ignitionRpmBins, hardCodedignitionRpmBins);
	copyTable(config->ignitionTable, hardCodedignitionTable);
#endif
}
