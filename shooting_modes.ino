bool once_already_shot = false;  // Flag to track if shot has occurred

void handleSafeMode(bool trigger_state) {
#ifndef STATIC_DWELL
  readDwellValue();
#endif

#ifndef STATIC_ROF
  readRofValue();
#endif
}

void handleSemiMode(bool trigger_state) {
  // Trigger logic
  if (trigger_state == BUTTON_PRESSED) {  // If pressed, state is LOW
    if (!once_already_shot) {             // Shoot once if not already shot
      DEBUG_PRINT("Shot in SEMI");
      powerTracerLeds(true);
      doTheShoot();
      powerTracerLeds(false);
      delay(debounce_delay);     // Debounce delay
      once_already_shot = true;  // Shot once
    }
  } else {
    once_already_shot = false;  // Restore to the beginning
  }
}

void handleAutoMode(bool trigger_state) {
  // Trigger logic
  if (trigger_state == BUTTON_PRESSED) {  // If pressed, state is LOW
    DEBUG_PRINT("Shot in AUTO");
    powerTracerLeds(true);
    doTheShoot();
    delay(full_auto_delay);  // Debounce delay
    powerTracerLeds(false);
  }
}

void computeFullAutoDelay() {
  int new_full_auto_delay = (1000 / rate_of_fire) - dwell_delay;
  if (new_full_auto_delay < 0) {
    full_auto_delay = 0;
    DEBUG_PRINT("ERROR: WROOONG VALUESSSSS");
  } else {
    full_auto_delay = new_full_auto_delay;
  }

  DEBUG_PRINT("full_auto_delay COMPUTED VALUE = " + String(full_auto_delay));
}
