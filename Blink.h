/*
  A simple blink library
  Created by MinDev05 April 6, 2024
*/

#ifndef Blink_h
#define Blink_h

#include <Arduino.h>

class Blink
{
public:
  Blink(int pin, int delay);
  void begin();
  void blink();

private:
  int _pin;
  int _delay;
};

#endif