/* EG-110
 * SNHU, CETA
 *
 * The main component of our source code.
 */

#include "Arduino.h"

// Custom libs
#include "HUSKYLENS.h"

void setup()
{
    // Setup Serial
    Serial.begin(115200);

    Serial.println("Configured Serial Interfaces.");
    Serial.println("This software expects your terminal to be \x1B[46mVT100 Compatable\x1B[0m.");

    // Print MOTD
    Serial.println(MOTD);
}

void loop()
{
}