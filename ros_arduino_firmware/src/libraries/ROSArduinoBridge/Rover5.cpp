#include "Arduino.h" 
#include "Dagu4Motor.h"
#include "Rover5.h"

Rover5::Rover5(int motor1PWMPin, int motor1DirPin, int motor1CurentPin,
               int motor2PWMPin, int motor2DirPin, int motor2CurentPin,
               int motor3PWMPin, int motor3DirPin, int motor3CurentPin,
               int motor4PWMPin, int motor4DirPin, int motor4CurentPin) 
            : motor1(motor1PWMPin, motor1DirPin, motor1CurentPin), 
              motor2(motor2PWMPin, motor2DirPin, motor2CurentPin), 
              motor3(motor3PWMPin, motor3DirPin, motor3CurentPin), 
              motor4(motor4PWMPin, motor4DirPin, motor4CurentPin) {

    // Dagu4Motor motor1(motor1PWMPin, motor1DirPin, motor1CurentPin); 
    // Dagu4Motor motor2(motor2PWMPin, motor2DirPin, motor2CurentPin); 
    // Dagu4Motor motor3(motor3PWMPin, motor3DirPin, motor3CurentPin); 
    // Dagu4Motor motor4(motor4PWMPin, motor4DirPin, motor4CurentPin);
    boolMove = false;
}

void Rover5::start() {
    motor1.begin();
    motor2.begin();
    motor3.begin();
    motor4.begin();
}

void Rover5::forward(int speed) {
    motor1.setMotorDirection(true);
    motor2.setMotorDirection(false);
    motor3.setMotorDirection(true);
    motor4.setMotorDirection(false);
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);
    boolMove = true;
}

void Rover5::backward(int speed) {
    motor1.setMotorDirection(false);
    motor2.setMotorDirection(true);
    motor3.setMotorDirection(false);
    motor4.setMotorDirection(true);
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);
    boolMove = true;
}

void Rover5::right(int speed) {
    motor1.setMotorDirection(false);
    motor2.setMotorDirection(true);
    motor3.setMotorDirection(true);
    motor4.setMotorDirection(false);
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);
    boolMove = true;
}

void Rover5::left(int speed) {
    motor1.setMotorDirection(true);
    motor2.setMotorDirection(false);
    motor3.setMotorDirection(false);
    motor4.setMotorDirection(true);
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);
    boolMove = true;
}

void Rover5::stop() {
    motor1.stopMotors();
    motor2.stopMotors();
    motor3.stopMotors();
    motor4.stopMotors();
    boolMove = false;
}

