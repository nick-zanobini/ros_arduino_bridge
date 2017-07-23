#include "Arduino.h"

class Rover5 {  
    public:  
        Rover5(int motor1PWMPin, int motor1DirPin, int motor1CurentPin, int motor2PWMPin, int motor2DirPin, int motor2CurentPin, int motor3PWMPin, int motor3DirPin, int motor3CurentPin, int motor4PWMPin, int motor4DirPin, int motor4CurentPin); 
        void start();
            void forward(int speed);
            void backward(int speed);
            void left(int speed);
            void right(int speed); 
        void stop();
        
    private:
        Dagu4Motor motor1;
        Dagu4Motor motor2;
        Dagu4Motor motor3;
        Dagu4Motor motor4;
        bool boolMove;
};

