// Notes here https://docs.platformio.org/en/latest/tutorials/core/unit_testing_blink.html#tutorial-unit-testing-blink

#include <Arduino.h>
#include <unity.h>

// Consts/Pins
#include "pindefs.h"
#include "consts.h"

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_spektrum(void)
{
    // Test all pins
    TEST_ASSERT_TRUE(pulseIn(THROTTLEPIN, HIGH) < 2000);
}

void setup()
{
    // Wait for startup
    delay(2000);

    UNITY_BEGIN(); // IMPORTANT
    RUN_TEST(test_spektrum);

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    UNITY_END(); // Stop unit testing
}