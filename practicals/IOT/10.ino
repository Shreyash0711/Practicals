float temp;
float mini =100;
float maxi =0;


int tempin=0;
void setup() {
  Serial.begin(9600);
}


void loop() {
 
  temp = analogRead(tempin);
  temp= temp* 0.48828125;
  Serial.print("Temperature in celsius is :");
  Serial.print(temp);
  Serial.print("°C");
  Serial.println(" ");


  mini=min(temp,mini);
  maxi=max(temp,maxi);
 
  Serial.print("Minimum temperature : ");
  Serial.print(mini);
  Serial.println(" ");
  Serial.print("Maximum temperature : ");
  Serial.print(maxi);
   Serial.println(" ");
  delay(5000);
}



