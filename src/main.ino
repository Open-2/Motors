#include <Arduino.h>



void setup(){
  //int motorPin = 5;
  int bxco = 150;
  int byco = 120;
//pinMode(motorPin, OUTPUT);


}

void loop(){
//analogWrite(motorPin, 255);







if (bxco >= 160) and (bxco <= 240){
    if (byco < 80){
      //Ball is at the front
      print("Test 1")
}   if (byco <= 160) and (byco >= 80){
      print("Test 2")
      //Ball is literally on the camera
}   if (byco > 160){
      //Ball is at the back
      print("Test 3")
}if (bxco > 240){
}   if (byco < 80){
      print("Test 4")
      //Ball is to the front right
}   if (byco <= 160) and (byco >= 80){
      print("Test 5")
      //Ball is on the right
}   if (byco > 160){
      print("Test 6")
      //Ball is to the back right
}if (bxco < 160){
}   if (byco < 80){
      print("Test 7")
      //Ball is to the front left
}   if (byco <= 160) and (byco >= 80){
      print("Test 8")
      //Ball is on the left
}   if (byco > 160){
      print("Test 9")
      //Ball is to the back left
      }
    }
}
