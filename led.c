#include "pico/stdlib.h"
#include "led.h"


// Pin numbers for the LEDs


void led_init() {
    // Initialize GPIO pins for the LEDs
    gpio_init(RED_PIN);
    gpio_init(GREEN_PIN);
    gpio_init(BLUE_PIN);

    // Set all LED pins as outputs
    gpio_set_dir(RED_PIN, GPIO_OUT);
    gpio_set_dir(GREEN_PIN, GPIO_OUT);
    gpio_set_dir(BLUE_PIN, GPIO_OUT);
}

void led_on(uint pin) {
    if (pin == BLUE_PIN) {
        // For the blue LED (negative logic), set the pin low to turn it on
        gpio_put(BLUE_PIN, 0);
    } else {
        // For other LEDs (positive logic), set the pin high to turn it on
        gpio_put(pin, 1);
    }
}

void led_off(uint pin) {
    if (pin == BLUE_PIN) {
        // For the blue LED (negative logic), set the pin high to turn it off
        gpio_put(BLUE_PIN, 1);
    } else {
        // For other LEDs (positive logic), set the pin low to turn it off
        gpio_put(pin, 0);
    }
}
