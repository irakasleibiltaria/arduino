// project06 light Theremin
// https://www.youtube.com/watch?v=w5qf9O6c20o

int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  while (millis() < 5000) { // while 5 seconds
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }  

  Serial.print("sensorValue: ");
  Serial.println(sensorValue);
  
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly: 
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

  Serial.print("sensorValue: ");
  Serial.println(sensorValue);
  
  tone(8, pitch, 20);
  
  delay(10);

}
