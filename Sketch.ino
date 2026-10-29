const int LDR_PIN = A0;
const int LED_PIN = 8;

int lightLevel = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightLevel = analogRead(LDR_PIN);

  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  if (lightLevel > 600) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
  }

  delay(500);
}
