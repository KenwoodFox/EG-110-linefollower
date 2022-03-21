/* EG-110
 * SNHU, CETA
 */

// Headers
#include "drivetrain.h"
#include "Arduino.h"

// Libs
#include "Servo.h"

Servo starboardESC;
Servo portESC;

Drivetrain::Drivetrain(int _starboardPWMPin, int _portPWMPin)
{
    /* Constructs a drivetrain
     */

    // Get pins
    starboardPWMPin = _starboardPWMPin;
    portPWMPin = _portPWMPin;
};

void Drivetrain::begin()
{
    // Construct ESCs
    starboardESC.attach(starboardPWMPin);
    portESC.attach(portPWMPin);
}

void Drivetrain::setChassisVector(signed int speed, signed int rot) const
{
    /* Sets the current vector
     * directing the chassis.
     */

    speed = map(speed, -128, 128, 1100, 1800);

    starboardESC.writeMicroseconds(1500);
    portESC.writeMicroseconds(1500);
};

void Drivetrain::setChassisOverride(int speed, int rot) const
{
    /* Sets the current pwm
     * width override for the drivetrain
     */
    Serial.println(starboardPWMPin);
    Serial.println(speed);

    starboardESC.writeMicroseconds(speed);
    portESC.writeMicroseconds(speed);
};
