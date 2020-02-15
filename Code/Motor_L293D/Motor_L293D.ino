int enable = 2;
int motor1 = 5;
int motor2 = 9;

void setup() {
  pinMode(enable, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  
  digitalWrite(enable, HIGH);
}

void loop() {
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  delay(2000);

  digitalWrite(motor2,HIGH);
  digitalWrite(motor1,LOW);
  delay(2000);
  
}
