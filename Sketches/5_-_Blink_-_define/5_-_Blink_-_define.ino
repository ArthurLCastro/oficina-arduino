#define led 13
#define tempo 1000

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);
}
