//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/hellen-112-17/connectors/main.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A8: return "235 Low Side Output";
		case Gpio::A9: return "242 injector output 2";
		case Gpio::B12: return "135 Switch Input";
		case Gpio::B13: return "134 Switch Input";
		case Gpio::B8: return "152 relay output";
		case Gpio::B9: return "140 Relay Output";
		case Gpio::C10: return "136 Switch Input";
		case Gpio::C11: return "147 Switch Input";
		case Gpio::C12: return "123 Switch Input";
		case Gpio::C13: return "256 Coil 1";
		case Gpio::C6: return "129 Fuel Consumption Output";
		case Gpio::C7: return "131 Relay Output";
		case Gpio::C8: return "141 Engine Radiator Fan";
		case Gpio::C9: return "142 Fuel Pump Relay";
		case Gpio::D10: return "245 injector output 4";
		case Gpio::D11: return "243 injector output 3";
		case Gpio::D12: return "246 low side 1.5A output";
		case Gpio::D13: return "128 Tach Output";
		case Gpio::D15: return "102 low side 1.5A output";
		case Gpio::D2: return "101 low side 1.5A output";
		case Gpio::D3: return "244 injector output 1";
		case Gpio::E11: return "233 MAF frequency";
		case Gpio::E12: return "231 Cam";
		case Gpio::E13: return "232 VSS";
		case Gpio::E15: return "120 Switch Input";
		case Gpio::E2: return "151 relay output";
		case Gpio::E3: return "255 Coil 4";
		case Gpio::E4: return "254 Coil 3";
		case Gpio::E5: return "253 Coil 2";
		case Gpio::E6: return "115 Main Relay";
		default: return nullptr;
	}
	return nullptr;
}
