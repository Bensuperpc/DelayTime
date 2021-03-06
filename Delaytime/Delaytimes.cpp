/*
* Delaytime.cpp - Library for Replace Delay in arduino library
* This library can replace the arduino delay to avoid blocking the arduino when it was executed.
* Created by Benoît(Bensuperpc) 06, February of 2019
* Updated by Benoît(Bensuperpc) for arduino 1.8.6 and newer (Not tested with previous versions)
* Modified by X (X@gmail.com) X, X, X
* Released into the Public domain.
* Use Notepad++ 7.5.7 64b
*/

//Link with Delaytimes.h
#include "Delaytimes.h"

/*********************************************************************************************************
** Function name:           Delaytime
** Descriptions:           	Default constructor
*********************************************************************************************************/
Delaytime::Delaytime(){
}


/*********************************************************************************************************
** Function name:           Delaytime
** Descriptions:           	Constructor 1
*********************************************************************************************************/
Delaytime::Delaytime(uint16_t delayt_){
	//Set Delay (in mS)
	delayt = delayt_;
}


/*********************************************************************************************************
** Function name:           delay
** Descriptions:           	Delay time between each exec.
*********************************************************************************************************/
bool Delaytime::delay(){
	if((millis() - lastexec) > delayt){
		//Reset last Exec value
		lastexec = millis();
		//Return true for execute function
		return true; 
	} else {
		return false;
	}
}


/*********************************************************************************************************
** Function name:           delay
** Descriptions:           	Delay time between each exec.
*********************************************************************************************************/
bool Delaytime::delay(uint16_t delayt__){
	if((millis() - lastexec) > delayt__){
		//Reset last Exec value
		lastexec = millis();
		//Return true for execute function
		return true; 
	} else {
		return false;
	}
}


/*********************************************************************************************************
** Function name:           ~Delaytime
** Descriptions:           	Desctructor of Delaytime
*********************************************************************************************************/
Delaytime::~Delaytime(){
}


/*********************************************************************************************************
  END FILE
*********************************************************************************************************/