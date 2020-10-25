/*
 * two L293D four motor test with Motor.h
 * by Aadityasiva
*/
#include <Motor.h> // including the library
// define motor pins (leftmotor1, leftmotor2, rightmotor1, rightmotor2)
Motor motor1(2, 3, 4, 5);
Motor motor2(6, 7, 8, 9);
void setup() {
  // nothing in setup
}
void loop() {
  motor1.forward(); // making the motor go forward
  motor2.forward(); // making the motor go forward
}
