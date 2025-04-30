int RED=2;
int GREEN=12;
int YELLOW=6;
  void setup()
{
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(GREEN,OUTPUT);
}
void loop() {
  digitalWrite(RED,HIGH);//RED
  delay(10000);
  digitalWrite(YELLOW,HIGH);//Yellow
  delay(2000);
  digitalWrite(RED,LOW);//RED OFF
  delay(9000);
  digitalWrite(YELLOW,LOW);//YELLOW OFF
  digitalWrite(GREEN,HIGH);//GREEN ON
  delay(10000);
  digitalWrite(YELLOW,HIGH);//Yellow
  delay(2000);
  digitalWrite(GREEN,LOW);//GREEN OFF
  delay(9000);
  digitalWrite(YELLOW,HIGH);//Yellow
  delay(3000);
  digitalWrite(YELLOW,LOW);//YELLOW OFF
  digitalWrite(RED,HIGH);//RED
  delay(10000);
  digitalWrite(RED,LOW);//RED OFF
}
