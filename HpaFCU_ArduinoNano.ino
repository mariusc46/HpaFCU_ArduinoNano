#include "globals.h"

void setup() {
  pinsSetup();                // Setup the I/O pins as configured in globals.h
  Serial.begin(115200);        // Initialize serial communication for debugging/data logging at 19200 bps
}

void loop() {
  readShootingSelector();             // Read and update the currently selected firing mode

  bool trigger_status = readTriggerButtonStatus();  // Get the status of the trigger button (pressed or not)

  // Handle the behavior based on the selected firing mode
  switch (selected_fire_mode) {
    case SAFE:
      handleSafeMode(trigger_status);  // Handle logic for safe mode (no firing)
      break;
    case SEMI:
      handleSemiMode(trigger_status);  // Handle logic for semi-automatic mode (single shot per trigger pull)
      break;
    case AUTO:
      handleAutoMode(trigger_status);   // Handle logic for automatic mode (continuous fire while trigger is held)
      break;
    default:
      DEBUG_PRINT("Error: Invalid fire mode selected");  // Debug message for invalid fire mode selection
      break;
  }
}
