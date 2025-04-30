float input;
void setup() {
    Serial.begin(9600);
    Serial.println();
}
 
void loop() {
  if (Serial.available()){
    input=Serial.parseFloat();
    Serial.println(sq(input));
    Serial.println(sqrt(input));
    delay (1000);
  }
}
