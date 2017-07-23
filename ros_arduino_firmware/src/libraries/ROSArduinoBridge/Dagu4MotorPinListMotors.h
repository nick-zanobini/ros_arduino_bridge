//Motors
const int pwm_a = 8; //PWM for CH1 LF
const int pwm_b = 9; //PWM for CH4 RR
const int pwm_c = 10; //PWM for CH2 LR
const int pwm_d = 11; //PWM for CH3 RF
const int dir_a = 7; //DIR for CH1
const int dir_b = 6; //DIR for CH4
const int dir_c = 5; //DIR for CH2
const int dir_d = 4; //DIR for CH3 

//Current Sensors
const int CURRENTA = A0;
const int CURRENTB = A1;
const int CURRENTC = A2;
const int CURRENTD = A3;
const int CURRENT_LIMIT = (1024 / 5) * 2.6; // amps 
