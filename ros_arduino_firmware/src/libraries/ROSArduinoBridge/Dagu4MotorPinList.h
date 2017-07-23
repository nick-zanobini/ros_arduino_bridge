//Motors
const int pwm_a = 4; //PWM for CH1 LF
const int pwm_b = 7; //PWM for CH4 RR
const int pwm_c = 9; //PWM for CH2 LR
const int pwm_d = 10; //PWM for CH3 RF
const int dir_a = 45; //DIR for CH1
const int dir_b = 43; //DIR for CH4
const int dir_c = 42; //DIR for CH2
const int dir_d = 44; //DIR for CH3 

//Current Sensors
const int CURRENTA = A0;
const int CURRENTB = A1;
const int CURRENTC = A2;
const int CURRENTD = A3;
const int CURRENT_LIMIT = (1024 / 5) * 2.6; // amps 

//Encoder Interrupts
const int encA1 = 2;
const int encA2 = 46;
const int encB1 = 3;
const int encB2 = 47;
const int encC1 = 18;
const int encC2 = 48;
const int encD1 = 19;
const int encD2 = 49;
