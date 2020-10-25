/*
 * single L293D two motor test with Motor.h
 * By aadityasiva
 */
#include <Motor.h> // including the library
Motor motor(2, 3, 4, 5); // define motor pins (leftmotor1, leftmotor2, rightmotor1, rightmotor2)
void setup() {
  // nothing in setup
}
void loop() {
  motor.forward(); // making the motor go forward
}
