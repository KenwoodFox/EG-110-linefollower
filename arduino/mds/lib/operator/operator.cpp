/* EG-110
 * SNHU, CETA
 */

// Headers
#include "operator.h"
#include "Arduino.h"

Operator::Operator(int _throttlePin, int _steerPin, int _autonomousPin){
    /* Constructs an operator
     */
};

bool Operator::getManualOverride() const
{
    return false;
};

int Operator::getThrottle() const
{
    // Note: this is a bad way to do this, it halts the CPU, a better way would be to use interrupts.
    int _ret = pulseIn(3, HIGH);

    // Map ret between -128 and 128
    _ret = map(_ret, 1100, 1800, -128, 128);

    return _ret;
};
