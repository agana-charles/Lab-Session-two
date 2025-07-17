const int potPin = 2;      // Analog-capable GPIO pin for middle pin of potentiometer
const int ledPin = 13;      // LED connected to GPIO13

void setup() {
  Serial.begin(115200);     // Start Serial Monitor
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  // Read analog value from potentiometer
  int potValue = analogRead(potPin); // Range: 0 - 4095
  int percent = map(potValue, 0, 4095, 0, 100); // Convert to percent

  // Print values to Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | ");
  Serial.print(percent);
  Serial.println("%");

  // Optional: trigger LED if pot goes above 50%
  if (percent > 50) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
