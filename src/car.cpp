#include <iostream>
#include <unistd.h>
#include <array>
#include <map>

#include "car.h"
#include "components/wheel.h"

using namespace std;

Car::Car(){

    Wheel front_left(1,2), front_right(3,4), back_left(5,6), back_right(7,8);

    array<Wheel, 4> wheels = {front_left, front_right, back_left, back_right};

    map<string, array<int,4>> movement;

    movement["north"]   = {1, 1, 1, 1};
    movement["south"]   = {-1,-1, -1,-1};
    movement["west"]    = {-1,1, 1,-1};
    movement["east"]    = {1,-1, -1,1};

    movement["northwest"] = {0,1,1,0};
    movement["northeast"] = {1,0,0,1};
    movement["southwest"] = {-1,0,0,-1};
    movement["southeast"] = {0,-1,-1,0};

    movement["cw"]  = {-1,1,-1,1};
    movement["ccw"] = {1,-1,1,-1};

}

void move(string direction, array<Wheel,4> wheels, map<string, array<int,4>> movement){
    array<int,4> dir_array = movement.find(direction)->second;
    for(int i = 0; i < 4; i++){
        if(dir_array[i] == 0){
            wheels[i].stop();
        }
        else{
            wheels[i].start(dir_array[i]);
        }
    }
    
}

void stop(array<Wheel, 4> wheels){
    for(int i = 0; i < 4; i++){
        wheels[i].stop();
    }
}

