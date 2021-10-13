#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;

int main() {

	Character perso("jean","Warior", 50, 12, 54,2);
	perso.show();
	perso.attack("Sword");

}