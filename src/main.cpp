#include <Arduino.h>

const int PIN_DO = 4;
const int PIN_AO =  5;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_DO, INPUT);
  pinMode(PIN_AO, INPUT);
}

void loop() {
  int digitalValue = digitalRead(PIN_DO);
  Serial.print("digitalValue = ");
  Serial.println( digitalValue );


  int analogValue = analogRead(PIN_AO);
  Serial.print("analogValue = ");
  Serial.println(analogValue);

  delay(1000);
}