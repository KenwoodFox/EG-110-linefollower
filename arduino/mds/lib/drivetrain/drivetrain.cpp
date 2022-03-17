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

int val;

Drivetrain::Drivetrain(int _StarboardPWMPin, int _PortPWMPin)
{
    /* Constructs a drivetrain
     */

    // Get pins
    StarboardPWMPin = _StarboardPWMPin;
    PortPWMPin = _PortPWMPin;

    // Construct ESCs
    pinMode(4, OUTPUT);
    StarboardESC.attach(5);
    // PortESC.attach(PortPWMPin);
};

void Drivetrain::setChassisVector(signed int speed, signed int rot){
    /* Sets the current vector
     * directing the chassis.
     */

    // StarboardESC.write(speed + rot);
    // PortESC.write(-speed - rot);

    // StarboardESC.writeMicroseconds(2000);
};
