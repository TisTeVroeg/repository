#ifndef Blink_h
#define Blink_h

class Blink {
public:
    Blink(int pin);
    void begin(void);
    void now(void);

private:
    int _pin;
    int _timeBetweenOnOffMillis = 1000;
    bool _isOn = false;
};

#endif