#include "Arduino.h"
#include "eTapeDriver.h"

DMDriver::eTapeDriver(){
	//do nothing
}

void eTapeDriver::init(int PIN_ETAPE){
	_PIN_ETAPE = PIN_ETAPE
}

int eTapeDriver::liquidLevel(){ 
    int eTapeReading = analogRead(_PIN_ETAPE); 
    int percentage = 0; 
	//convert to percentage
    return percentage;//send current moisture value
}