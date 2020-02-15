int sensor = A1;
float tempc, tempf, vout;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  vout = analogRead(sensor);
  vout = (vout*500)/1023;
  tempc = vout;
  tempf = (vout*1.8)+32;
  
  Serial.println("In degree c = ");
  Serial.println(tempc);
  
  Serial.println("In farenhite f = ");
  Serial.println(tempf);
}
