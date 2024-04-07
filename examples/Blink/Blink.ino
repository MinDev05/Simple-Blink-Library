#include "Blink.h"

Blink led(13, 500); //Blink pin 13 with a delay of 500ms

void setup() {
  led.begin();
}

void loop() {
  led.blink();
}
