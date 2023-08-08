#include <TM1637TinyDisplay.h>

// Pin configuration for TM1637 display
const int CLK_PIN = 2; 
const int DIO_PIN = 3; 

// Initialize TM1637TinyDisplay object
TM1637TinyDisplay display(CLK_PIN, DIO_PIN); 

// Pin configuration for LEDs and button (or sound sensor)
const int yellowled = 11;
const int redled = 12;
const int BUTTON_PIN = 4;
const int TIMER_INTERVAL = 250; 
int i;
int remainingSeconds = 60; 

void setup() {
  // Set display brightness and show initial value
  display.setBrightness(0x0f); 
  display.showNumberDec(0, true); 

  // Set button (or sound sensor) pin as input with pull-up resistor
  pinMode(BUTTON_PIN, INPUT_PULLUP); 

  // Set built-in LED and red LED pins as output
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // Timer handling
  static unsigned long lastTime = 0; 
  static bool isRunning = true; 
  static bool isButtonPressed = false; 

  // Check if button (or sound sensor) is pressed
  if (digitalRead(BUTTON_PIN) == LOW) {
    // Blink red LED multiple times
    for (i = 1; i <= 5; i++) {
      digitalWrite(12, HIGH);
      delay(200);
      digitalWrite(12, LOW);   
      delay(200);
    }
    
    // Reset timer and flags
    remainingSeconds = 60;
    isRunning = true;
    isButtonPressed = true;
  } else {
    isButtonPressed = false;
  }

  // Timer countdown logic
  if (isRunning && !isButtonPressed && millis() - lastTime >= TIMER_INTERVAL) {
    lastTime += TIMER_INTERVAL;
    remainingSeconds--;

    // Turn on red LED if remaining time is less than 7 seconds
    if (remainingSeconds < 7) {
      digitalWrite(11, HIGH); 
    }

    // Timer reaches 0, stop timer and activate built-in LED
    if (remainingSeconds < 0) {
      remainingSeconds = 0;
      isRunning = false;
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(LED_BUILTIN, HIGH);  
    }
  }

  // Display remaining seconds on TM1637 display
  display.showNumberDec(remainingSeconds, true);
  delay(10);
}
