#include <Arduino.h>



void setup(){
  int motorPin = 5;
  int bxco = 150;
  int byco = 120;
  pinMode(motorPin, OUTPUT);


}

void loop(){
  analogWrite(motorPin, 255);







if (bxco >= 160){
  if (bxco <=240){
    if (byco < 80){
    //Ball is at the front
}   if (byco <= 160 && byco >= 80){
      if (byco >= 80){
        //Ball is literally on the camera
}}  if (byco > 160){
      //Ball is at the back
}}if (bxco > 240){
}   if (byco < 80){
      //Ball is to the front right
}   if (byco <= 160){
      if (byco >= 80){
        //Ball is on the right
}}  if (byco > 160){
      //Ball is to the back right
}if (bxco < 160){
}   if (byco < 80){
      //Ball is to the front left
}   if (byco <= 160){
      if (byco >= 80){
        //Ball is on the left
}}  if (byco > 160){
      //Ball is to the back left
      }
    }
}
