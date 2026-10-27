// main.ino – schelet de firmware pentru nodul de achiziție
#include "config.h"

void setup() {
  // inițializăm portul serial
  Serial.begin(SERIAL_BAUD);
}

void loop() {
  // citim valoarea brută a ADC (0..1023)
  int raw = analogRead(SENSOR_PIN);

  // o trimitem spre calculator
  Serial.println(raw);

  // așteptăm până la următoarea măsurare
  delay(SAMPLE_PERIOD_MS);
}