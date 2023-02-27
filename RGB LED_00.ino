int redPin = 9; // Red LED connected to digital pin 9
int greenPin = 10; // Green LED connected to digital pin 10
int bluePin = 11; // Blue LED connected to digital pin 11

void setup() {
  pinMode(redPin, OUTPUT); // Set red LED pin as an output
  pinMode(greenPin, OUTPUT); // Set green LED pin as an output
  pinMode(bluePin, OUTPUT); // Set blue LED pin as an output
}

void loop() {
  // Set the LED colors to red, green, and blue in sequence
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(1000);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(1000);
}
