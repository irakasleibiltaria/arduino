// tilt

int led = 7;
int switchPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  if (digitalRead(switchPin)) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  
  //delay(10);
  
}
