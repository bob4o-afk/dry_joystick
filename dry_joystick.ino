const int pwmPin = 2; 

void setup() {
  pinMode (0 , INPUT);
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  int digital = digitalRead(0);

  if(value <= 900){
    digitalWrite(pwmPin, HIGH);
  }else{
    digitalWrite(pwmPin, LOW);
  }
}
