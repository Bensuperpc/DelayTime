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
#include "Arduino.h"

class Delaytime
{
	public:
	Delaytime(); //Default constructor
	Delaytime(uint16_t delayt_);//Second constructor
	bool delay();//Default delay function
	bool delay(uint16_t delayt__);//Second delay function
	uint32_t lastexec;//Save last exec time
	uint16_t delayt;//Delay time between each exec.
	~Delaytime();//Destructor
	private:
};
#endif
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/

/*

Code import of 5 files:
Delaytimes.h: importing file ...
Delaytimes.h: start import...
class Delaytime
Delaytimes.h: ...import finished
Delaytimes.h: importing file ... DONE

Arduino_CAN_EVACharge_EV.h: importing file ...
Arduino_CAN_EVACharge_EV.h: start import...
class Arduino_CAN_EVACharge_EV
method CAN3
method RelaisResistancesV1
Arduino_CAN_EVACharge_EV.h: ...import finished
Arduino_CAN_EVACharge_EV.h: importing file ... DONE

EVAChargeEV.h: importing file ...
EVAChargeEV.h: start import...
EVAChargeEV.h: ...import finished
EVAChargeEV.h: importing file ... DONE

Main_Charge.h: importing file ...
Main_Charge.h: start import...
class Main_Charge
Main_Charge.h: ...import finished
Main_Charge.h: importing file ... DONE

RelaisResistances.h: importing file ...
RelaisResistances.h: start import...
class RelaisResistances
RelaisResistances.h: ...import finished
RelaisResistances.h: importing file ... DONE
*/