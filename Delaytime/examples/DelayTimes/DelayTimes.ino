/*
* DelayTimes.ino - Library for Replace Delay in arduino library
* This library can replace the arduino delay to avoid blocking the arduino when it was executed.
* Created by Benoît(Bensuperpc) 19, February of 2019
* Updated by Benoît(Bensuperpc) for arduino 1.8.6 and newer (Not tested with previous versions)
* Modified by X (X@gmail.com) X, X, X
* Released into the Public domain.
* Use Notepad++ 7.5.7 64b
*/


#include "Delaytimes.h" //Include the library library

//Two ways to use Delaytimes :
Delaytime Way1;//Way one, delay define after
Delaytime Way2(1000);//Way two delay = 1000 mS

//If you want more delay, you must create more class instance, one delay per class instance !

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);//Open serial port
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (Way1.delay(500) == true) {
    Serial.println("Send Every 500mS");
  }
  if (Way2.delay() == true) {
    Serial.println("Send Every 1000mS");
  }

  //you can change delay time during code execution in way 2 only :
  //Way2.delayt = 2000;//In milli seconds for change delay to 2000 mS
}
