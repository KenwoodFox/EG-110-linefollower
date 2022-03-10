#include "Arduino.h"

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