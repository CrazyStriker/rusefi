//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-4K-GDI/connectors/gdi-A.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-4K-GDI/connectors/gdi-B.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-4K-GDI/connectors/iobox.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A1: return "28B input";
		case Gpio::B1: return "10A VR Negative";
		case Gpio::C13: return "14B Ignition 1";
		case Gpio::D10: return "3B GDI Injector 4";
		case Gpio::D11: return "5B GDI Injector 3";
		case Gpio::E3: return "11B Ignition 4";
		case Gpio::E4: return "12B Ignition 3";
		case Gpio::E5: return "13B Ignition 2";
		case Gpio::E9: return "22A Input 2";
		case Gpio::F12: return "HPFP Positive";
		case Gpio::F3: return "21A Digital Input 1";
		case Gpio::F4: return "27A Digital Input 3";
		case Gpio::F5: return "28A Digital Input 4";
		case Gpio::G7: return "9B GDI Injector 1";
		case Gpio::G8: return "7B GDI Injector 2";
		case Gpio::MSIOBOX_0_OUT_1: return "MS IO-Box 0 OUT 1";
		case Gpio::MSIOBOX_0_OUT_2: return "MS IO-Box 0 OUT 2";
		case Gpio::MSIOBOX_0_OUT_3: return "MS IO-Box 0 OUT 3";
		case Gpio::MSIOBOX_0_OUT_4: return "MS IO-Box 0 OUT 4";
		case Gpio::TLE9104_0_OUT_0: return "4A Port injector 1";
		case Gpio::TLE9104_0_OUT_1: return "3A Port injector 2";
		case Gpio::TLE9104_0_OUT_2: return "2A Port injector 3";
		case Gpio::TLE9104_0_OUT_3: return "1A Port injector 4";
		case Gpio::TLE9104_1_OUT_0: return "5A Main Relay Control";
		case Gpio::TLE9104_1_OUT_1: return "7A Fuel Pump";
		case Gpio::TLE9104_1_OUT_2: return "8A Fan 1";
		case Gpio::TLE9104_1_OUT_3: return "9A Fan 2";
		case Gpio::TLE9104_2_OUT_0: return "29A VVT1";
		case Gpio::TLE9104_2_OUT_1: return "30A VVT2";
		case Gpio::TLE9104_2_OUT_2: return "31A VVT3";
		case Gpio::TLE9104_2_OUT_3: return "32A VVT4";
		case Gpio::TLE9104_3_OUT_0: return "33B Wastegate Solenoid";
		case Gpio::TLE9104_3_OUT_1: return "34B AC Control";
		default: return nullptr;
	}
	return nullptr;
}
