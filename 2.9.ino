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

float V_in = 5, R_r = 10000, B = 3380, T_r = 298.15, T, V_ntc, NTC_value;

void setup() {
  Serial.begin(9600);
  delay(10000);
  analogReadResolution(12);
}

void loop() {
  NTC_value = analogRead(NTC);
  V_ntc = (NTC_value/4095)*V_in;
  T = 1/((1/B)*log((V_ntc*4700)/((V_in-V_ntc)*R_r))+(1/T_r));
  Serial.println(T-273.15);
  delay(1000);
}
