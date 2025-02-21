//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-gold/connectors/34pins-3k-A.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-gold/connectors/34pins-4k-B.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A2: return "24B - Digital/analog Input 3";
		case Gpio::A7: return "25A - Digital/analog Input 5";
		case Gpio::B8: return "12B Coil 6";
		case Gpio::B9: return "11B Coil 7";
		case Gpio::C0: return "16A - Digital/analog input 2";
		case Gpio::C13: return "13A Coil 1";
		case Gpio::C5: return "16B AUX 2";
		case Gpio::E12: return "14B Hall Input 1";
		case Gpio::E13: return "15B Hall Input 2";
		case Gpio::E14: return "27B Flex Fuel";
		case Gpio::E15: return "24A - Digital Input 6";
		case Gpio::E2: return "13B Coil 5";
		case Gpio::E3: return "10A Coil 4";
		case Gpio::E4: return "11A Coil 3";
		case Gpio::E5: return "12A Coil 2";
		case Gpio::E6: return "10B Coil 8";
		case Gpio::E9: return "23B - Digital/analog Input 4";
		case Gpio::F3: return "15A - Digital In 1";
		case Gpio::F4: return "21B Knock 1 / Digital input 7";
		case Gpio::F5: return "22B Knock 2 / Digital input 8";
		case Gpio::F6: return "17A - Digital input 1";
		case Gpio::TLE9104_0_OUT_0: return "4A - Injector 1";
		case Gpio::TLE9104_0_OUT_1: return "3A - Injector 2";
		case Gpio::TLE9104_0_OUT_2: return "2A - Injector 3";
		case Gpio::TLE9104_0_OUT_3: return "1A - Injector 4";
		case Gpio::TLE9104_1_OUT_0: return "4B - Injector 5";
		case Gpio::TLE9104_1_OUT_1: return "3B - Injector 6";
		case Gpio::TLE9104_1_OUT_2: return "2B - Injector 7";
		case Gpio::TLE9104_1_OUT_3: return "1B - Injector 8";
		case Gpio::TLE9104_2_OUT_0: return "5A Fuel Pump Relay";
		case Gpio::TLE9104_2_OUT_1: return "6A Idle Output";
		case Gpio::TLE9104_2_OUT_3: return "14A - Tachometer Output";
		case Gpio::TLE9104_3_OUT_0: return "8B LS5";
		case Gpio::TLE9104_3_OUT_1: return "6B LS3";
		case Gpio::TLE9104_3_OUT_2: return "7B LS4";
		case Gpio::TLE9104_3_OUT_3: return "5B Main Relay";
		default: return nullptr;
	}
	return nullptr;
}
