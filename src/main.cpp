#include <Arduino.h>
#include "blink.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int pin = 2;
  Blink blink(pin);
  blink.begin();
}