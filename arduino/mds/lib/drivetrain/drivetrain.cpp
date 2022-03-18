/* EG-110
 * SNHU, CETA
 */

// Headers
#include "drivetrain.h"
#include "Arduino.h"

// Libs
#include "PPMEncoder.h"

Drivetrain::Drivetrain(int _StarboardPWMPin, int _PortPWMPin){
    /* Constructs a drivetrain
     */

    // ppmEncoder.begin(2);
};

void Drivetrain::setChassisVector(signed int speed, signed int rot){
    /* Sets the current vector
     * directing the chassis.
     */

    // StarboardESC.write(speed + rot);
    // PortESC.write(-speed - rot);

    // ppmEncoder.setChannelPercent(0, speed);
};
