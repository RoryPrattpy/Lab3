SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  analogWrite(D7, 255);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
}