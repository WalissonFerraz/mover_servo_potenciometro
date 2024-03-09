#include <Servo.h>

#define pot A0
#define serv 3
int angulo;
Servo servo1;

void setup() {
  servo1.attach(serv);
  angulo = 0;
  servo1.write(angulo);
}

void loop() {
  angulo = map(analogRead(pot), 0, 1023, 0, 180);
  servo1.write(angulo);
  delay(100);
}
