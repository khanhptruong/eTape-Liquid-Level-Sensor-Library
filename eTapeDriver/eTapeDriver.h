/* --------------------------------------------------------------------------------------------------- *
* Khanh Truong - khanhptruong@csu.fullerton.edu
* California State University Fullerton
* Created: FEB 22 2018
*
* Description: Device driver for eTape Liquid Level Sensor.
*
* Copyright 2017 
* --------------------------------------------------------------------------------------------------- */

#ifndef eTapeDriver_h
#define eTapeDriver_h

#include "Arduino.h"

class eTapeDriver{
public:
	eTapeDriver();
	void init(int PIN_ETAPE);
	int liquidLevel();
private:
	int _PIN_ETAPE
};

#endif