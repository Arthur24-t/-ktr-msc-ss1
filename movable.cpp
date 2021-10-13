#include <iostream>
#include <string>
#include "Character.hpp"
#include "movable.hpp"
using namespace std;

void Movable::moveRight(){

cout << "[" << name << "] : Moves right" << endl;


}
    void Movable::moveLeft(){
cout << "[" << name << "] : Moves Left" << endl;

    }
    void Movable::moveForward(){
cout << "[" << name << "] : Moves Forward" << endl;

    }
    void Movable::moveBack(){

cout << "[" << name << "] : Moves Back" << endl;
    }