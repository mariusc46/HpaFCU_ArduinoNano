#include "config.h"

// Button states
const bool BUTTON_PRESSED = true;
const bool BUTTON_NOT_PRESSED = false;

const int FEEDBACK_THRESHOLD_TIME = 50;

// Frequency values for feedback
const int DEFAULT_FREQ = 2000;      // Default feedback frequency (Hz)
const int MIN_FEEDBACK_FREQ = 4000; // Minimum feedback frequency (Hz)
const int MAX_FEEDBACK_FREQ = 6000; // Maximum feedback frequency (Hz)

const int NUMBER_OF_SAMPLES = 10;

// Fire Modes Enum
enum FireModes {
  SAFE,    // 0 - No firing, safe mode
  SEMI,    // 1 - Semi-automatic mode, single shot per trigger pull
  AUTO,    // 2 - Automatic mode, continuous firing while trigger is held
  ERROR    // 3 - Error state, invalid or unrecognized mode
};

// Timing and Delays
const int debounce_delay = 70;        // Debounce delay for button press (in milliseconds)
int dwell_delay_old = dwell_delay;    // Store previous dwell delay
int full_auto_delay = 1000 / rate_of_fire - dwell_delay; // Delay for full-auto mode (adjusted for ROF and dwell)
int rof_old = rate_of_fire;           // Store previous rate of fire for comparison

// Variables for fire mode handling and button state
int selected_fire_mode = SAFE;      // Current fire mode (initially set to SAFE)

#ifdef DEBUG
#define DEBUG_PRINT(...) Serial.println(__VA_ARGS__)
#else
#define DEBUG_PRINT(...)  // Do nothing
#endif
