#include <string>
#include "Character.hpp"
using namespace std;

#ifndef Movable_h
#define Movable_h


class Movable :  public Character {
protected:

public:
  
    Movable(); 
    void moveRight();
    void moveLeft();
    void moveForward();
    void moveBack();
};


#endif