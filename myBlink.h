#ifndef myBlink_h
#define myBlink_h

#include <Arduino.h>
#define ON true
#define OFF false

class myBlink
{
	public:
		myBlink(int pin);
		void myblink(bool value, int blinklength, int blinkloops);
		void myblink(bool value, int blinklength);
		void myblink(bool value);
	private:
		uint8_t pinNumber;
		int currentloop;

};

#endif
