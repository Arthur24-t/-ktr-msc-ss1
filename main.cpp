#include <iostream>
#include <string>
#include "Character.hpp"
#include "Character.cpp"
#include "movable.hpp"
#include "movable.cpp"
using namespace std;

int main() {

	Character Warrior("Billy","Warrior", 100,10,8,3);
	Character Mage("Kevin","Mage", 70,3,10,10);


Warrior.unsheathe();
Warrior.attack("hammer");
Mage.attack("wand");


return 0;
}