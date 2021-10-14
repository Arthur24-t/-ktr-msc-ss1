#include <iostream>
#include <string>
#include "Character.hpp"
#include "movable.hpp"
using namespace std;

int main() {

	Character Warrior("Billy","Warrior", 100,10,8,3);
	Character Mage("Kevin","Mage", 70,3,10,10);


Warrior.unsheathe();
Warrior.tryToAttack("thinks");
Mage.attack("wand");


return 0;
}