/*
* Delaytime.cpp - Library for Replace Delay in arduino library
* This library can replace the arduino delay to avoid blocking the arduino when it was executed.
* Created by Benoît(Bensuperpc) 06, February of 2019
* Updated by Benoît(Bensuperpc) for arduino 1.8.6 and newer (Not tested with previous versions)
* Modified by X (X@gmail.com) X, X, X
* Released into the Public domain.
* Use Notepad++ 7.5.7 64b
*/

//Librairies à inclure
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
	delayt = delayt_;//Set Delay (in mS)
}


/*********************************************************************************************************
** Function name:           delay
** Descriptions:           	Delay time between each exec.
*********************************************************************************************************/
bool Delaytime::delay(){
	if((millis() - lastexec) > delayt){
		lastexec = millis();//Reset last Exec value
		return true; //Return true for execute
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
		lastexec = millis();//Reset last Exec value
		return true; //Return true for execute
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

