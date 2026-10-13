#include <Arduino.h>
#include "blink.h"

// put function declarations here:
int myFunction(int, int);

Blink blink(2);

void setup() {
  // put your setup code here, to run once:
  blink.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  blink.now();
}