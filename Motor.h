#ifndef Motor_h
#define Motor_h
#include "Arduino.h"
class Motor {
  public:
     Motor(int A, int B, int C, int D);
     void forward();
     void backward();
     void left();
     void right();
     void brake();
  private:
     int _A;
     int _B;
     int _C;
     int _D;
};
#endif
