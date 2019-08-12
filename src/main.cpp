#include <Arduino.h>

#define LOOP_DELAY 2000

#define LED_PIN      PB3
#define LED_DURATION_MS 1000

#define BUZZER_PIN      PB4
#define BUZZER_FREQ 440
#define BUZZER_DURATION_MS 100

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, BUZZER_FREQ, BUZZER_DURATION_MS);

  delay(LED_DURATION_MS);
  digitalWrite(LED_PIN, LOW);


  delay(LOOP_DELAY);
}