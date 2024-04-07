/*
  A simple blink library
  Created by MinDev05 April 6, 2024
*/

#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin, int delay){
  _pin = pin;
  _delay = delay;
}

void Blink::begin() {
  pinMode(_pin, OUTPUT);
}

void Blink::blink() {
  digitalWrite(_pin, HIGH);
  delay(_delay);
  digitalWrite(_pin, LOW);
  delay(_delay);
}