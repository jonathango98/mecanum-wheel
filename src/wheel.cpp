#include <iostream>

#include "wheel.h"

using namespace std;

Wheel::Wheel(int input_location){
    location = input_location;
}

void Wheel::turn(){

    cout << "Turning wheel " << location << endl;

}