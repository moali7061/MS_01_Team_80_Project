#ifndef LED_H
#define LED_H
#ifndef RED_PIN
#define RED_PIN 0
#endif
#ifndef GREEN_PIN
#define GREEN_PIN 3
#endif
#ifndef BLUE_PIN
#define BLUE_PIN 2
#endif

void led_init(void);       // Initializes the LED GPIO pins
void led_on(uint pin);      // Turns on the LED connected to the specified pin
void led_off(uint pin);     // Turns off the LED connected to the specified pin

#endif // LED_H
