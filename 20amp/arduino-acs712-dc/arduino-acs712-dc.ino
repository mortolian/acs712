// MEASURE DC CURRENT WITH ACS712 20A PACKAGE
// ---------------------------------------------------
// This will measure DC current with the 20A current measureing breakout board
// The 20A unit has a 100mV/A sensitivity
// 0A is at (511 points) or 2.5V if you supply it a input voltage of 5V
// This can read -20A to +20A
//
// Author: Gideon Schoonbee (mortolio)
// http://portfolio.mortolio.com
// Date: 20 June 2015

#define SENSOR_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  float analogReading = analogRead( SENSOR_PIN );
  float amp = ((2.5 - (analogReading * 0.0049)) / 0.1);
  Serial.print(amp);
  Serial.print(" A - ");
  Serial.print( amp * 1000 );
  Serial.println(" mA"); 
  delay(2000);
}
