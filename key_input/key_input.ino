/*
[19 July 2025]

Description:

  A modified version of the PhysicalPixel example sketch

  This accepts a character from serial monitor and uses it to determine whether the
  built-in LED stays ON or OFF

*/


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {

    int input = Serial.read();

    if (input == 'h') {
      digitalWrite(LED_BUILTIN, HIGH);

    }
    else if (input == 'l') {
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
