/* EG-110
 * SNHU, CETA
 */

// Headers
#include "operator.h"
#include "Arduino.h"

Operator::Operator(int _throttlePin, int _steerPin, int _autonomousPin, int _recvMin, int _recvMax)
{
    /* Constructs an operator
     */

    // Pins
    throttlePin = _throttlePin;
    pinMode(throttlePin, INPUT);
    steerPin = _steerPin;
    pinMode(steerPin, INPUT);
    autonomousPin = _autonomousPin;
    pinMode(autonomousPin, INPUT);

    // PWM values
    recvMin = _recvMin;
    recvMax = _recvMax;
};

bool Operator::getManualOverride() const
{
    int _ret = pulseIn(throttlePin, HIGH);

    if (_ret > 1500)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int Operator::getThrottle() const
{
    // Note: this is a bad way to do this, it halts the CPU, a better way would be to use interrupts.
    int _ret = pulseIn(throttlePin, HIGH);

    // Map ret between -128 and 128
    _ret = map(_ret, recvMin, recvMax, -128, 128);

    return _ret;
};

int Operator::getSteer() const
{
    // Note: this is a bad way to do this, it halts the CPU, a better way would be to use interrupts.
    int _ret = pulseIn(steerPin, HIGH);

    // Map ret between -128 and 128
    _ret = map(_ret, recvMin, recvMax, -128, 128);

    return _ret;
};
