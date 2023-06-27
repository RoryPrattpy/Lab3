/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/Lab3/src/Lab3.ino"
void setup();
void loop();
#line 1 "/Users/admin/CTD_2023/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  analogWrite(D7, 255);
  analogWrite(D6, 255);
  analogWrite(D5, 0);
}