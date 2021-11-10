#include <Arduino.h>
#include <Servo.h>

//code by lucasterly | github.com/lucasterly/arduino

Servo lucasterly;
void setup() {
lucasterly.attach(3 );

}

void loop() {
 lucasterly.write(0);
 delay(1000);
 lucasterly.write(80);
  delay(1000);
   lucasterly.write(140);
   delay(1000);
}


//////////////////////////////////////////////
//use a servo and a arduino whit this code!//
//////////////////////////////////////////////
