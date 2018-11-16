/*
 * This is a sample configuration file for the "mqtt_esp8266" light.
 *
 * Change the settings below and save the file as "config.h"
 * You can then upload the code using the Arduino IDE.
 */

// Leave this here. These are the choices for CONFIG_STRIP below.
enum strip {
  BRIGHTNESS, // only one color/only white
  RGB,        // RGB LEDs
  RGBW        // RGB LEDs with an extra white LED per LED
};

enum tempsensor {
  DALLASTEMPERATURE,
  ANALOGSENSOR
};

#define CONFIG_STRIP RGB // Choose one of the options from above.

// Pins
// In case of BRIGHTNESS: only WHITE is used
// In case of RGB(W): red, green, blue(, white) is used
// All values need to be present, if they are not needed, set to -1,
// it will be ignored.
#define CONFIG_PIN_RED   0  // For RGB(W)
#define CONFIG_PIN_GREEN 2  // For RGB(W)
#define CONFIG_PIN_BLUE  3  // For RGB(W)
#define CONFIG_PIN_WHITE -1 // For BRIGHTNESS and RGBW

//temperature sensor setup
#define CONFIG_TEMP_PIN 4
#define TEMPERATURE_ENABLED false
//pushbutton toggle 
#define CONFIG_BUTTON_PIN 5
#define CONFIG_BUTTON_ENABLED true

// WiFi
#define CONFIG_WIFI_SSID "EOLO - FRITZ!Box PE"
#define CONFIG_WIFI_PASS "67824240068436655540"

// MQTT
#define CONFIG_MQTT_HOST "192.168.178.19"
#define CONFIG_MQTT_PORT 1883 // Usually 1883
#define CONFIG_MQTT_USER "mqtt"
#define CONFIG_MQTT_PASS "mqtt"
#define CONFIG_MQTT_CLIENT_ID "ESP_LED_1" // Must be unique on the MQTT network

// MQTT Topics
#define CONFIG_MQTT_TOPIC_STATE "home/ESP_LED_1"
#define CONFIG_MQTT_TOPIC_SET "home/ESP_LED_1/set"
#define CONFIG_MQTT_TOPIC_TEMPERATURE "home/ESP_LED_1/temperature"
#define CONFIG_MQTT_TOPIC_HUMIDITY "home/ESP_LED_1/humidity"

#define CONFIG_MQTT_PAYLOAD_ON "ON"
#define CONFIG_MQTT_PAYLOAD_OFF "OFF"

// Miscellaneous
// Default number of flashes if no value was given
#define CONFIG_DEFAULT_FLASH_LENGTH 2
// Number of seconds for one transition in colorfade mode
#define CONFIG_COLORFADE_TIME_SLOW 10
#define CONFIG_COLORFADE_TIME_FAST 3

// Reverse the LED logic
// false: 0 (off) - 255 (bright)
// true: 255 (off) - 0 (bright)
#define CONFIG_INVERT_LED_LOGIC false

// Set the mode for the built-in LED on some boards.
// -1 = Do nothing. Leave the pin in its default state.
//  0 = Explicitly set the BUILTIN_LED to LOW.
//  1 = Explicitly set the BUILTIN_LED to HIGH. (Off for Wemos D1 Mini)
#define CONFIG_BUILTIN_LED_MODE -1

// Enables Serial and print statements
#define CONFIG_DEBUG true
