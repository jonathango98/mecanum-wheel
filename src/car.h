#include <iostream>
#include <array>
#include <map>

#include "components/wheel.h"

using namespace std;

class Car{
    public:
        Car();

        array<Wheel,4> wheels;

        Wheel front_left;
        Wheel front_right;
        Wheel back_left;
        Wheel back_right;

        map<string, array<int, 4>> movement;
        
        void move(string direction, array<Wheel,4> wheels, map<string, array<int,4>> movement);
        void stop(array<Wheel, 4> wheels);

};