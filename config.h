// Pin assignments
const int trigger_pin = 2;  // Input pin for the trigger
const int selector_semi = 3;  // Selector switch position 1 (e.g., semi mode)
const int selector_full = 4;  // Selector switch position 2 (e.g., full-auto mode)
const int buzzer_pin = 7;    // Output pin for buzzer
const int solenoid_pin = 8;  // Output pin for solenoid control
const int tracer_pin = 9;    // Output pin for tracer (e.g., LED or light)
const int dwell_input_pin = A3;  // Analog input for variable dwell setting (e.g., solenoid duration)
const int rof_input_pin = A1;    // Analog input for variable rate of fire (ROF) setting

// USER CONFIGURABLE PARAMETERS (modify as little as possible)
const int DWELL_MIN_VALUE = 10;  // Minimum solenoid dwell time in milliseconds (ms)
const int DWELL_MAX_VALUE = 30;  // Maximum solenoid dwell time in milliseconds (ms)
const int ROF_MIN_VALUE = 10;    // Minimum Rate of Fire (ROF) in rounds per second
const int ROF_MAX_VALUE = 25;    // Maximum Rate of Fire (ROF) in rounds per second

// Default settings
int rate_of_fire = ROF_MIN_VALUE;  // Default Rate of Fire (ROF) in rounds per second
int dwell_delay = DWELL_MIN_VALUE; // Default solenoid dwell delay in milliseconds (ms)

// Features
bool tracer_enabled = true;

// Debugging (Uncomment the line below to enable serial debug output)
#define DEBUG

// Uncomment the following lines if you want a static ROF and dwell delay
// #define STATIC_ROF    // Use this to set a static rate of fire (ROF)
// #define STATIC_DWELL  // Use this to set a static solenoid dwell delay
