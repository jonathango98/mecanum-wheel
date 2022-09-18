#include <iostream>

#include <JetsonGPIO.h>

#include "wheel.h"

using namespace std;

Wheel::Wheel(int dir_pin1, int dir_pin2){

    dir_pin1 = dir_pin1;
    dir_pin2 = dir_pin2;

    GPIO::setup(dir_pin1, GPIO::OUT);
    GPIO::setup(dir_pin2, GPIO::OUT);

}

void Wheel::start(bool direction){

    if (direction){

        GPIO::output(dir_pin1, GPIO::HIGH);
        GPIO::output(dir_pin2, GPIO::LOW);
        
    }
    else{

        GPIO::output(dir_pin1, GPIO::LOW);
        GPIO::output(dir_pin2, GPIO::HIGH);
        
    }

}

void Wheel::stop(){

    GPIO::output(dir_pin1, GPIO::LOW);
    GPIO::output(dir_pin2, GPIO::LOW);

}