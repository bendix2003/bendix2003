// Define all Arduino pins
// Digital Out
#define USER_LED1     4
#define USER_LED2     5
#define BUCK_PIN      6
#define BOOST_PIN     9
#define CURRENT_BLANK 10
#define USER_LED3     11
#define USER_LED4     13

// Digital In
#define USER_BTN1     3
#define USER_BTN2     7
#define SHUTDOWN      8
#define USER_SW       12

// Analog In
#define IN_CURR       0
#define SW_CURR       0
#define INDUCTOR_CURR 1
#define USER_POTI     1
#define OUT_CURR      2
#define VIN_MEAS      3
#define VOUT_MEAS     4
#define NTC           5

void setup() {
  // put your setup code here, to run once:
  delay(10000);
  pinMode(USER_LED3, OUTPUT);
  setAnalogWriteFrequency(USER_LED3,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(USER_LED3, 120);
  delay(1000);
}
