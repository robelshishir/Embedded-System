int led = 5;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int i;
  for(i=0; i<=255; i++)
  {
    analogWrite(led, i);
    delay(10);
  }

  for(i=255; i>=0; i--)
  {
    analogWrite(led, i);
    delay(10);
  }
  
}
