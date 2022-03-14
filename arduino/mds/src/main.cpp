/* EG-110
 * SNHU, CETA
 *
 * The main component of our source code.
 */

#include "Arduino.h"

// Settings/config
#include "pindefs.h"

// Custom libs
#include "HUSKYLENS.h"
#include "drivetrain.h"

const Drivetrain drivetrain = Drivetrain(STAR_MOTOR, PORT_MOTOR);

void setup()
{
    // Setup Serial
    Serial.begin(SERIAL_SPEED);

    Serial.println("Configured Serial Interfaces.");
    Serial.println("This software expects your terminal to be \x1B[46mVT100 Compatable\x1B[0m.");

    // Print MOTD
    Serial.println(MOTD);
}

void loop()
{
}