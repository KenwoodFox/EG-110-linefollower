/* EG-110
 * SNHU, CETA
 */

#include "drivetrain.h"

Drivetrain::Drivetrain(int _StarboardPWMPin, int _PortPWMPin)
{
    /* Constructs a drivetrain
     */

    StarboardPWMPin = _StarboardPWMPin;
    PortPWMPin = _PortPWMPin;
};

void Drivetrain::setChassisVector(signed int speed, signed int rot){
    /* Sets the current vector
     * directing the chassis.
     */
};
