void pinsSetup() {
  pinMode(trigger_pin, INPUT_PULLUP);  // Set trigger_pin as an INPUT with an internal pull-up resistor for trigger button signal
  pinMode(selector_semi, INPUT_PULLUP);  // Set selector_p1 as an INPUT with an internal pull-up resistor for fire mode selector switch
  pinMode(selector_full, INPUT_PULLUP);  // Set selector_p2 as an INPUT with an internal pull-up resistor for fire mode selector switch

  pinMode(solenoid_pin, OUTPUT);  // Set solenoid_pin as an OUTPUT to control the solenoid (for firing mechanism)
  pinMode(buzzer_pin, OUTPUT);    // Set buzzer_pin as an OUTPUT to control the buzzer (for audio feedback)
  pinMode(tracer_pin, OUTPUT);    // Set tracer_pin as an OUTPUT to control tracer LEDs (if equipped)

  // Initialize the output pins to LOW (off state)
  digitalWrite(tracer_pin, LOW);    // Ensure tracer LEDs are off initially
  digitalWrite(buzzer_pin, LOW);    // Ensure the buzzer is off initially
  digitalWrite(solenoid_pin, LOW);  // Ensure the solenoid is not activated initially
}

void readShootingSelector() {
  int state_semi = digitalRead(selector_semi);
  int state_full = digitalRead(selector_full);

  if (state_semi == LOW) {
    selected_fire_mode = SEMI;
  } else if (state_full == LOW) {
    selected_fire_mode = AUTO;
  } else {
    selected_fire_mode = SAFE;
  }
}

void readDwellValue() {

  int smoothedValue = 0;
  for (int i = 0; i < NUMBER_OF_SAMPLES; i++) {
    smoothedValue += analogRead(dwell_input_pin);
    delay(1);
  }
  smoothedValue /= NUMBER_OF_SAMPLES;

  int potentiometer_val = smoothedValue;
  int new_dwell_value = map(potentiometer_val, 0, 1023, DWELL_MIN_VALUE, DWELL_MAX_VALUE);

  if (new_dwell_value >= DWELL_MIN_VALUE && new_dwell_value != dwell_delay) {
    dwell_delay_old = dwell_delay;
    dwell_delay = new_dwell_value;

    float buzzer_tone = map(potentiometer_val, 0, 1023, MIN_FEEDBACK_FREQ, MAX_FEEDBACK_FREQ);
    beepTheBuzzer(1, 20, buzzer_tone);
    DEBUG_PRINT("Dwell value: " + String(dwell_delay));
  }
}

void readRofValue() {
  int smoothedValue = 0;
  for (int i = 0; i < NUMBER_OF_SAMPLES; i++) {
    smoothedValue += analogRead(rof_input_pin);
    delay(5);
  }
  smoothedValue /= NUMBER_OF_SAMPLES;

  int potentiometer_val = smoothedValue;
  int new_rof_value = map(potentiometer_val, 0, 1023, ROF_MIN_VALUE, ROF_MAX_VALUE);

  if (new_rof_value >= ROF_MIN_VALUE && new_rof_value != rate_of_fire) {
    rof_old = rate_of_fire;
    rate_of_fire = new_rof_value;

    float buzzer_tone = map(potentiometer_val, 0, 1023, MIN_FEEDBACK_FREQ, MAX_FEEDBACK_FREQ);
    beepTheBuzzer(1, 20, buzzer_tone);
    DEBUG_PRINT("Rof value: " + String(rate_of_fire));
    computeFullAutoDelay();
  }
}

bool readTriggerButtonStatus() {
  return digitalRead(trigger_pin) == LOW;
}

void powerTracerLeds(bool led_status) {
  if (tracer_enabled) {
    DEBUG_PRINT("Tracer status: " + String(led_status));
    digitalWrite(tracer_pin, led_status);
  }
}

void triggerSolenoid() {
  digitalWrite(solenoid_pin, HIGH);  // Solenoid open
  delay(dwell_delay);                // Use dwell_delay for delay
  digitalWrite(solenoid_pin, LOW);   // Solenoid closed
}

void doTheShoot() {
  triggerSolenoid();
}

void beepTheBuzzer(int number_of_buzzes, int beep_duration, int tone_freq) {
  DEBUG_PRINT("beepTheBuzzer number_of_buzzes " + String(number_of_buzzes) + "beep_duration" + String(beep_duration));
  for (int beep_index = 0; beep_index < number_of_buzzes; beep_index++) {
    tone(buzzer_pin, tone_freq);
    delay(beep_duration);  // Beep duration
    noTone(buzzer_pin);
    delay(beep_duration);
  }
}
