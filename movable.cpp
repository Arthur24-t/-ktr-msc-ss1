#include <iostream>
#include <string>
#include "Character.hpp"
#include "movable.hpp"
using namespace std;

void Movable::moveRight(){

if (RPGClass == "Warrior")
    { cout << "[" << name << "] : move right like a badboy" << endl;
    }
    
    if (RPGClass == "Mage")
    {cout << "[" << name << "] : move right furtively" << endl;
    }


}
    void Movable::moveLeft(){
if (RPGClass == "Warrior")
    { cout << "[" << name << "] : move Left like a badboy" << endl;
    }
    
    if (RPGClass == "Mage")
    {cout << "[" << name << "] : move Left furtively" << endl;
    }

    }
    void Movable::moveForward(){
if (RPGClass == "Warrior")
    { cout << "[" << name << "] : move Forward like a badboy" << endl;
    }
    
    if (RPGClass == "Mage")
    {cout << "[" << name << "] : move Forward furtively" << endl;
    }

    }
    void Movable::moveBack(){

if (RPGClass == "Warrior")
    { cout << "[" << name << "] : move Back like a badboy" << endl;
    }
    
    if (RPGClass == "Mage")
    {cout << "[" << name << "] : move Back furtively" << endl;
    }
    }
    