float temp;
int tempPin=2;
void setup() {
  Serial.begin(9600);
}
void loop() {
  temp=analogRead(tempPin);
  temp=temp*0.48828125;
  Serial.print("Temperature is ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println(" ");
  delay(3000);
}


