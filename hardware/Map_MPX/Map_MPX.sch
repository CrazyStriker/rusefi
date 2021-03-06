EESchema Schematic File Version 2
LIBS:mpx_sensor
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Pressure Sensors"
Date "7 jan 2015"
Rev "0.1"
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MPX_SENSOR BP1
U 1 1 54ADACC8
P 4800 2650
F 0 "BP1" H 4800 2350 60  0000 C CNN
F 1 "MPX_SENSOR" H 4800 2950 60  0000 C CNN
F 2 "~" H 4800 2650 60  0000 C CNN
F 3 "~" H 4800 2650 60  0000 C CNN
	1    4800 2650
	1    0    0    -1  
$EndComp
$Comp
L CONN_3 K1
U 1 1 54ADAD9C
P 3150 2700
F 0 "K1" V 3100 2700 50  0000 C CNN
F 1 "CONN_3" V 3200 2700 40  0000 C CNN
F 2 "" H 3150 2700 60  0000 C CNN
F 3 "" H 3150 2700 60  0000 C CNN
	1    3150 2700
	-1   0    0    1   
$EndComp
$Comp
L C C1
U 1 1 54ADAE13
P 3850 2400
F 0 "C1" H 3850 2500 40  0000 L CNN
F 1 "100nF" H 3856 2315 40  0000 L CNN
F 2 "~" H 3888 2250 30  0000 C CNN
F 3 "~" H 3850 2400 60  0000 C CNN
	1    3850 2400
	-1   0    0    1   
$EndComp
$Comp
L C C2
U 1 1 54ADAE65
P 3950 3050
F 0 "C2" H 3950 3150 40  0000 L CNN
F 1 "47pF" H 3956 2965 40  0000 L CNN
F 2 "~" H 3988 2900 30  0000 C CNN
F 3 "~" H 3950 3050 60  0000 C CNN
	1    3950 3050
	-1   0    0    1   
$EndComp
$Comp
L R R1
U 1 1 54ADAE74
P 3750 3050
F 0 "R1" V 3830 3050 40  0000 C CNN
F 1 "51K" V 3757 3051 40  0000 C CNN
F 2 "~" V 3680 3050 30  0000 C CNN
F 3 "~" H 3750 3050 30  0000 C CNN
	1    3750 3050
	-1   0    0    1   
$EndComp
Wire Wire Line
	3500 2600 4200 2600
Connection ~ 3850 2600
Wire Wire Line
	3500 2800 4200 2800
Wire Wire Line
	3950 2800 3950 2850
Connection ~ 3950 2800
Connection ~ 3750 2800
Wire Wire Line
	3750 3300 3950 3300
Wire Wire Line
	3950 3300 3950 3250
$Comp
L GND #PWR01
U 1 1 54ADAF50
P 4200 2700
F 0 "#PWR01" H 4200 2700 30  0001 C CNN
F 1 "GND" H 4200 2630 30  0001 C CNN
F 2 "" H 4200 2700 60  0000 C CNN
F 3 "" H 4200 2700 60  0000 C CNN
	1    4200 2700
	0    1    1    0   
$EndComp
$Comp
L GND #PWR02
U 1 1 54ADAF64
P 3500 2700
F 0 "#PWR02" H 3500 2700 30  0001 C CNN
F 1 "GND" H 3500 2630 30  0001 C CNN
F 2 "" H 3500 2700 60  0000 C CNN
F 3 "" H 3500 2700 60  0000 C CNN
	1    3500 2700
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR03
U 1 1 54ADAF78
P 3850 2200
F 0 "#PWR03" H 3850 2200 30  0001 C CNN
F 1 "GND" H 3850 2130 30  0001 C CNN
F 2 "" H 3850 2200 60  0000 C CNN
F 3 "" H 3850 2200 60  0000 C CNN
	1    3850 2200
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR04
U 1 1 54ADAF87
P 3850 3350
F 0 "#PWR04" H 3850 3350 30  0001 C CNN
F 1 "GND" H 3850 3280 30  0001 C CNN
F 2 "" H 3850 3350 60  0000 C CNN
F 3 "" H 3850 3350 60  0000 C CNN
	1    3850 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 3350 3850 3300
Connection ~ 3850 3300
$EndSCHEMATC
