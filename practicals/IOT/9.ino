float temp;
float fara;
int tempin=0;
void setup() {
  Serial.begin(9600);
}


void loop() {
 
  temp = analogRead(tempin);
  temp= temp* 0.48828125;
  Serial.print("Temperature in Celsius :");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  fara=temp*9/5+32;
  Serial.print("Temperature in Fahrenheit :");
  Serial.print(fara);
  Serial.print("°F");
  Serial.println(" ");

  delay(1000);
}



