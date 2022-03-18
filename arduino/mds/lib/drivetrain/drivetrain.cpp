/* EG-110
 * SNHU, CETA
 */

// Headers
#include "drivetrain.h"
#include "Arduino.h"

// Libs
#include "Servo.h"

Servo StarboardESC;
Servo PortESC;

Drivetrain::Drivetrain(int _StarboardPWMPin, int _PortPWMPin)
{
    /* Constructs a drivetrain
     */

    // Get pins
    StarboardPWMPin = _StarboardPWMPin;
    PortPWMPin = _PortPWMPin;

    // Construct ESCs
    StarboardESC.attach(2);
    PortESC.attach(3);
};

void Drivetrain::setChassisVector(signed int speed, signed int rot) const
{
    /* Sets the current vector
     * directing the chassis.
     */

    speed = map(speed, -128, 128, 1100, 1800);

    StarboardESC.writeMicroseconds(1500);
    PortESC.writeMicroseconds(1500);
};
