int value = 0;
int out = 11;

void setup() {
  pinMode(out, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = Serial.parseInt();
  Serial.println(value);
  delay(200);

  if(value>0)
  {
    digitalWrite(out, HIGH);
    delay(200);
  }

  else
  {
    digitalWrite(out, LOW);
    delay(200);
  }
  
}
