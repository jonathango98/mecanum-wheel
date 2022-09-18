#include <array>
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(){

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

    array<int,4> arr = movement.find("west")->second;
    cout << arr[0] << endl;

    return 0;
}