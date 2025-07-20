/*
[20 July 2025]

Description:

  This program reads the output voltage of a potentiometer (as an integer between 0 and 1023)
  and uses it as delay time between two pulses of the in-built LED


Connections:

  - Connect the Ground (GND) pin and the 5V pin to either pin of a potentiometer
  - Connect the middle pin of the potentiometer to the A0 pin of the board

*/


int input_pin = A0;
int sensor_value = 0;


void setup() {

  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  
}


void loop() {

  sensor_value = analogRead(input_pin); // from A0 pin

  Serial.print(sensor_value);
  Serial.print("\n");

  digitalWrite(LED_BUILTIN, HIGH);
  delay(sensor_value);
  digitalWrite(LED_BUILTIN, LOW);
  delay(sensor_value);

}
