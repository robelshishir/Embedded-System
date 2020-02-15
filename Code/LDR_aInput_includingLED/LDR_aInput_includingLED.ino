int ldr = A0;
int ldr_value = 0;
int led = 12;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr_value = analogRead(ldr);
  Serial.println(int_value);
  delay(200);

  if(ldr_value>200)
  {
    digitalWrite(led, LOW);
    delay(200);
  }

  else
  {
    digitalWrite(led, HIGH);
    delay(200);
  }
  
}
