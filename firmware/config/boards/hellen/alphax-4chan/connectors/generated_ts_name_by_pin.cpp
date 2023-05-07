//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-4chan/connectors/alphax-4chan-aux.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-4chan/connectors/main.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A6: return "C7 - CAM Hall/Digital";
		case Gpio::A7: return "E7 - Flex";
		case Gpio::A8: return "A3 - Fuel Pump";
		case Gpio::B1: return "C2/C3 Crank Sensor VR";
		case Gpio::B9: return "F2 - VVT#1 rev G";
		case Gpio::C13: return "A6 - Ignition 1";
		case Gpio::C7: return "D2 - Out Boost";
		case Gpio::C9: return "F1 - Idle2";
		case Gpio::D10: return "E1 - Injector 4";
		case Gpio::D11: return "D1 - Injector 3";
		case Gpio::D12: return "Aux10 - High2 legacy F4";
		case Gpio::D13: return "C8 - Idle";
		case Gpio::D15: return "Aux9 - High1 legacy F2";
		case Gpio::D9: return "Aux2 - Inj 5";
		case Gpio::E12: return "C3 - Crank+ (hall)";
		case Gpio::E14: return "C2 - Crank- (hall)";
		case Gpio::E15: return "E6 - Cam+ (hall)";
		case Gpio::E3: return "D7 - Ignition 4";
		case Gpio::E4: return "D6 - Ignition 3";
		case Gpio::E5: return "A7 - Ignition 2";
		case Gpio::E6: return "F4 - VVT#2 rev G";
		case Gpio::F11: return "C4 - 2Step/Digital";
		case Gpio::F12: return "Aux4 - Inj 6";
		case Gpio::F3: return "D3 - Digital In 2";
		case Gpio::F4: return "E3 - Digital In 3";
		case Gpio::F5: return "E4 - Digital In 4";
		case Gpio::F6: return "F3 - Digital In 5";
		case Gpio::F9: return "E5/E6 Cam Sensor VR";
		case Gpio::G11: return "E2 - Out NOS";
		case Gpio::G12: return "F5 - MAIN";
		case Gpio::G2: return "C1 - Fan Relay";
		case Gpio::G6: return "A4 - Tachometer";
		case Gpio::G7: return "A8 - Injector 1";
		case Gpio::G8: return "B8 - Injector 2";
		default: return nullptr;
	}
	return nullptr;
}
