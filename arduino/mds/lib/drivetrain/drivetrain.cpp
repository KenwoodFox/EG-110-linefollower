/* EG-110
 * SNHU, CETA
 */

// Headers
#include "drivetrain.h"
#include "Arduino.h"

// Libs
#include "Servo.h"

Servo StarboardESC;
// Servo PortESC;

Drivetrain::Drivetrain(int _StarboardPWMPin, int _PortPWMPin)
{
    /* Constructs a drivetrain
     */

    // Get pins
    StarboardPWMPin = _StarboardPWMPin;
    PortPWMPin = _PortPWMPin;

    // Construct ESCs
    pinMode(9, OUTPUT);
    StarboardESC.attach(9);
    // PortESC.attach(PortPWMPin);
};

void Drivetrain::setChassisVector(signed int speed, signed int rot)
{
    /* Sets the current vector
     * directing the chassis.
     */

    // StarboardESC.write(speed + rot);
    // PortESC.write(-speed - rot);

    StarboardESC.write(speed);
};
