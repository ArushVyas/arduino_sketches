/*
[19 July 2025]

Description:

  Just getting familiar with the workflow of writing and uploading code.
  This is my "Hello world" to Arduino

*/


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // blink built-in LED 8 times and then turn it off
  for (int i = 0; i < 8; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
  digitalWrite(LED_BUILTIN, LOW);

}

// // the loop function runs over and over again forever
// void loop() {

// }
