char input;

void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  Serial.println("Enter the colour\n1)YELLOW 'y'\n2)RED 'r'\n3)GREEN 'g'\n4)ALL 'b'");
  
  while (Serial.available()>=0) {
    
  
  input = Serial.read();

  if (input == 'y' || input == 'Y') {
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
  } else if (input == 'r' || input == 'R') {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
  } else if (input == 'g' || input == 'G') {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
  } else if (input == 'b' || input == 'B') {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(100);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
  }
 }
}

