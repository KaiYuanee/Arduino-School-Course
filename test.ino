int onboard_LED = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output
  pinMode(onboard_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(onboard_LED, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(onboard_LED, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
}
