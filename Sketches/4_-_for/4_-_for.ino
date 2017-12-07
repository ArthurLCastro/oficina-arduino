int led = 13;
int estado = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(i=1 ; i<=10 ; i++){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
}
