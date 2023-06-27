/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/Lab3/src/Lab3.ino"
void setup();
void loop();
void update();
void r_change(bool change);
void b_change(bool change);
void g_change(bool change);
#line 1 "/Users/admin/CTD_2023/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int b = 0;
int g = 0;
int r = 255;

void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);

  analogWrite(D5, 255 - r);
  analogWrite(D6, 255);
  analogWrite(D7, 255);
}

void loop() {
  b_change(true);
  r_change(false);
  g_change(true);
  b_change(false);
  r_change(true);
}

void update() {
  analogWrite(D5, 255-r);
  analogWrite(D6, 255-b);
  analogWrite(D7, 255-g);
  delay(20);
}


void r_change(bool change) {
  while ((r <= 255 && change) || (r >= 0 && !change)) {
    analogWrite(D5, 255 - r);
    delay(20);
    if (change) {
      r++;
    } else {
      r--;
    }
  }
}

void b_change(bool change) {
  while ((b <= 255 && change) || (b >= 0 && !change)) {
    analogWrite(D6, 255 - b);
    delay(20);
    if (change) {
      b++;
    } else {
      b--;
    }
  }
}

void g_change(bool change) {
  while ((g <= 255 && change) || (g >= 0 && !change)) {
    analogWrite(D7, 255 - g);
    delay(20);
    if (change) {
      g++;
    } else {
      g--;
    }
  }
}