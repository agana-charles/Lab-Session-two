const int signalPin = 35; // Pin connected after the diode

void setup() {
  Serial.begin(115200);          // Start serial communication
  pinMode(signalPin, INPUT);     // Set GPIO 35 as input
}

void loop() {
  int inputState = digitalRead(signalPin);  // Read voltage level at pin 35

  if (inputState == HIGH) {
    Serial.println("High voltage detected!");  // Printed when voltage is HIGH (usually > ~2.0V)
  } else {
    Serial.println("No high voltage detected (safe).");  // Printed when voltage is LOW
  }

  delay(800); // Wait 800 milliseconds before checking again
}
