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
#include "drivetrain.cpp"

const Drivetrain drivetrain = Drivetrain(0, 1);

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