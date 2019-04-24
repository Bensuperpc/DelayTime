/*
* Delaytime.h - Library for Replace Delay in arduino library
* This library can replace the arduino delay to avoid blocking the arduino when it was executed.
* Created by Benoît(Bensuperpc) 06, February of 2019
* Updated by Benoît(Bensuperpc) for arduino 1.8.6 and newer (Not tested with previous versions)
* Modified by X (X@gmail.com) X, X, X
* Released into the Public domain.
* Use Notepad++ 7.5.7 64b
*/

#ifndef Delaytime_h
#define Delaytime_h

//Libraries
#include "Arduino.h"

class Delaytime
{
	public:
	//Default constructor
	Delaytime(); 
	
	//Second constructor
	Delaytime(uint16_t delayt_);
	
	//Default delay function
	bool delay();
	
	//Second delay function
	bool delay(uint16_t delayt__);
	
	//Delay time between each exec.
	uint16_t delayt;
	
	//Destructor
	~Delaytime();
	private:
	//Save last exec time
	uint32_t lastexec;
};
#endif
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/