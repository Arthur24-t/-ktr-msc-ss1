#include <iostream>
#include <string>
#include "Character.hpp"
#include "Character.cpp"
using namespace std;

int main() {

	Character Warrior("Billy","Warrior", 100,10,8,3);
	Character Mage("Axel","Mage", 70,3,10,10);

Warrior.attack("hammer");
Mage.attack("wand");


return 0;
}