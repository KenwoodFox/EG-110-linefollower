// Notes here https://docs.platformio.org/en/latest/tutorials/core/unit_testing_blink.html#tutorial-unit-testing-blink

#include <Arduino.h>
#include <unity.h>

// Include headers
#include "pindefs.h"

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_led_builtin_pin_number(void)
{
    TEST_ASSERT_EQUAL(2, STAR_MOTOR);
}

void setup()
{
    // Wait for startup
    delay(2000);

    UNITY_BEGIN(); // IMPORTANT
    RUN_TEST(test_led_builtin_pin_number);

    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    UNITY_END(); // Stop unit testing
}