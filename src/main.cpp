#include <iostream>
#include <unistd.h>

#include <JetsonGPIO.h>

#include "wheel.h"

using namespace std;

int main(){

    GPIO::setmode(GPIO::BOARD);
    GPIO::setup(7, GPIO::OUT);

    Wheel front_left(0);
    Wheel front_right(1);
    Wheel back_left(2);
    Wheel back_right(3);

    int n = 0;

    while (n < 5){
        
        front_left.turn();

        cout << "ON" << endl;
        GPIO::output(7, GPIO::HIGH);

        sleep(1);

        cout << "OFF" << endl;
        GPIO::output(7, GPIO::LOW);

        sleep(1);

        n = n + 1;
    }
    

    return 0;
}