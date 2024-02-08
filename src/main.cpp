#include <Arduino.h>

void readTurbidity(); 

void setup() {
  
  Serial.begin(9600);

 }

void loop() {

  readTurbidity();

}

void readTurbidity() {

  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1024.0);
 
  Serial.println ("Sensor Output (V):");
  Serial.println (voltage);
  Serial.println();
  delay(1000);

}

