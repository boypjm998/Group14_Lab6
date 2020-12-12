#include <myBlink.h>
#include <Arduino.h>
myBlink pin(13);

void setup() {
 
  
}


void loop() {
  pin.myblink(ON,1,2);
  //pin.myblink(ON,3);
  //pin.myblink(ON);
                  
}
