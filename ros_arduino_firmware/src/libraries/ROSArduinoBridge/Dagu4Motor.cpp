#include "Arduino.h"
#include "Dagu4Motor.h"

Dagu4Motor::Dagu4Motor(int pwmPin, int dirPin, int currPin) {  
    _pwm = pwmPin;  
    _dir = dirPin;  
    _curr = currPin;
    _currRate = 0;
    _speed = 0;	
}

void Dagu4Motor::begin() {
    pinMode(_pwm, OUTPUT);  
    pinMode(_dir, OUTPUT); 
    pinMode(_curr, INPUT);
	
}

void Dagu4Motor::stopMotors() { 
    setSpeed(0);  
}  

void Dagu4Motor::setSpeed(int speedMotor) {  
    speedMotor = constrain(speedMotor, 0, 255);

    analogWrite(_pwm, speedMotor);
    _speed=speedMotor;

}

void Dagu4Motor::setMotorDirection(bool isMotor) {  
    if(isMotor) {  
      digitalWrite(_dir, HIGH);  //Set motor direction, 1 low, 2 high  
    } else {  
      digitalWrite(_dir, LOW);  //Reverse motor direction, 1 high, 2 low  
    } 
}

int Dagu4Motor::getCurrent() {

     _currRate = analogRead(_curr);

return _currRate;
}

int Dagu4Motor::getSpeed() {
     return _speed;
}






	

