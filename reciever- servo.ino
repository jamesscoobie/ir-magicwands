
#include <Servo.h>

Servo myservo;

const int Lidar =  13;  

int pos = 0;    // variable to store the servo position
int degree = 90;    // rotation
int State = 0;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(Lidar, INPUT);
}

void loop() {
  State = digitalRead(Lidar);
  if (State == LOW) {
    digitalWrite(LED_BUILTIN, LOW);  // turn LED OFF
    myservo.write(pos);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);  // turn LED ON
    myservo.write(degree);
  }


}

