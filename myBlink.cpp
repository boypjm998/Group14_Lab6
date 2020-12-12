#include <Arduino.h>
#include "myBlink.h"
myBlink::myBlink(int pin) {
	pinMode(pin, OUTPUT);
	pinNumber = pin;
}

void myBlink::myblink(bool value, int blinklength, int blinkloops)
{
	//ssssss;

	for (;currentloop < blinkloops; currentloop = currentloop+1)
	{
		if (currentloop >= blinkloops)
		{
			while (1)
			{
				;
			}
		}
		if (value == ON)
		{

			for (int a = 0; a <= 255; a++) {
				analogWrite(pinNumber, a);
				delay(blinklength);
			}
			for (int a = 255; a >= 0; a--) {
				analogWrite(pinNumber, a);
				delay(blinklength);
			}

		}
		else {
			digitalWrite(pinNumber, LOW);
		}
	}
}

void myBlink::myblink(bool value)
{
	if (value == ON)
	{
		for (int a = 0; a <= 255; a++) {
			analogWrite(pinNumber, a);
			delay(8);
		}
		for (int a = 255; a >= 0; a--) {
			analogWrite(pinNumber, a);
			delay(8);
		}
	}
	else {
		digitalWrite(pinNumber, LOW);
	}
}

void myBlink::myblink(bool value, int blinklength)
{
	if (value == ON)
	{
		for (int a = 0; a <= 255; a++) {
			analogWrite(pinNumber, a);
			delay(blinklength);
		}
		for (int a = 255; a >= 0; a--) {
			analogWrite(pinNumber, a);
			delay(blinklength);
		}
	}
	else {
		digitalWrite(pinNumber, LOW);
	}
}

