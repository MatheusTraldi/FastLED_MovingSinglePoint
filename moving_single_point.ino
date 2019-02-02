#include <FastLED.h>
#define NUM_LEDS 144
#define DATA_PIN 2

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS); // GRB is the color order specified in datasheet
}

void loop() {
  // Erasing all LEDs
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Black;
  }

  // Moving
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i - 1] = CRGB::Black;
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(30);
  }
}
