#ifndef Blink_h
#define Blink_h

class Blink {
public:
    Blink(int pin);
    void now(void);
    int _pin;
    int _timeBetweenOnOfMilllis = 1000;
};

#endif