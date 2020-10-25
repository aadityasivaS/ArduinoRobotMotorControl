#include "Motor.h"
#include "Arduino.h"
Motor::Motor(int A, int B, int C, int D) {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  _A = A;
  _B = B;
  _C = C;
  _D = D;
}
void Motor::forward() {
  digitalWrite(_A, HIGH);
  digitalWrite(_B, LOW);
  digitalWrite(_C, HIGH);
  digitalWrite(_D, LOW);
}
void Motor::backward() {
  digitalWrite(_A, LOW);
  digitalWrite(_B, HIGH);
  digitalWrite(_C, LOW);
  digitalWrite(_D, HIGH);
}
void Motor::right() {
  digitalWrite(_A, LOW);
  digitalWrite(_B, HIGH);
  digitalWrite(_C, HIGH);
  digitalWrite(_D, LOW);
}
void Motor::left() {
  digitalWrite(_A, HIGH);
  digitalWrite(_B, LOW);
  digitalWrite(_C, LOW);
  digitalWrite(_D, HIGH);
}
void Motor::brake() {
  digitalWrite(_A, LOW);
  digitalWrite(_B, LOW);
  digitalWrite(_C, LOW);
  digitalWrite(_D, LOW);
}
