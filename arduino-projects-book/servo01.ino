// project05 Mood Cube Servo motor
// potentiometer in the beardboard problem solution: http://forum.arduino.cc/index.php?topic=185388.0

#include <Servo.h>

Servo myServo;

int angle;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 

  if (i == 0) {
    i = 1;
    angle = 10;

  } else {
    i = 0;
    angle = 100;
  }

  Serial.print("angle: ");
  Serial.println(angle);
 
  myServo.write(angle);
  delay(100);

}
