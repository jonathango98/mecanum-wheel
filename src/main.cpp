#include <iostream>
#include <unistd.h>

#include <JetsonGPIO.h>

#include "components/wheel.h"

using namespace std;

int main(){

    GPIO::setmode(GPIO::BOARD);
    GPIO::setup(7, GPIO::OUT);

    int n = 0;

    while (n < 5){

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