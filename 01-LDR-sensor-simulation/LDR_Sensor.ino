
int LDR = A0;
int LED = 13;
int lightValue = 0;

void setup() {
  pinMode(LDR,INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightValue = analogRead(LDR);

  if (lightValue < 500) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  Serial.println(lightValue);
  delay(500);
}



