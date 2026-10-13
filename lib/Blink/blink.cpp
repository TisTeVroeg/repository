#include <Arduino.h>
#include "blink.h"

Blink::Blink(int pin) : _pin(pin) {}

void Blink::begin(void) {
    pinMode(_pin, OUTPUT);
    digitalWrite(_pin, LOW);
    _isOn = false;
}

void Blink::now(void) {
    _isOn = !_isOn;
    digitalWrite(_pin, _isOn ? HIGH : LOW);
    delay(_timeBetweenOnOffMillis);
}
