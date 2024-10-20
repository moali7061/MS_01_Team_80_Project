#include "pico/stdlib.h"
#include "led.h"

int main() {
    // Initialize stdio and LEDs
    stdio_init_all();
    led_init();

    while (1) {
        // Turn on the red LED for 1 second
        led_on(RED_PIN);
        sleep_ms(1000);
        led_off(RED_PIN);
        led_on(RED_PIN);
        sleep_ms(1000);
        led_off(RED_PIN);
        // Turn on the green LED for 1 second
        led_on(GREEN_PIN);
        sleep_ms(1000);
        led_off(GREEN_PIN);

        // Turn on the blue LED for 1 second
        led_on(BLUE_PIN);
        sleep_ms(1000);
        led_off(BLUE_PIN);

        // Turn on all LEDs together for 2 seconds
        led_on(RED_PIN);
        led_on(GREEN_PIN);
        led_on(BLUE_PIN);
        sleep_ms(2000);

        // Turn off all LEDs
        led_off(RED_PIN);
        led_off(GREEN_PIN);
        led_off(BLUE_PIN);

        // Delay before restarting the sequence
        sleep_ms(1000);
    }

    return 0;
}
