#include <Arduino.h>

int motorPin = 5;

void setup(){
pinMode(motorPin, OUTPUT);


}

void loop(){
analogWrite(motorPin, 255);

}
