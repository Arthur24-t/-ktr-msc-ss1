
#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;

Character::Character() {
    name ="";
    RPGClass="";
    life = 50;
    agility = 2;
    strength = 2;
    wit = 2;
}
Character::Character(string _name, string _RPGClasse, int _life, int _agility, int _strength, int _wit) {
    name = _name;
    RPGClass = _RPGClasse;
    life = _life;
    agility = _agility;
    strength = _strength;
    wit = _wit;
}



string Character::getName() {
    return name;
}
string Character::getRPGClass() {
    return RPGClass;
}
int Character::getLife() {
    return life;
}
int Character::getAgility() {
    return agility;
}
int Character::getStrength() {
    return strength;
}
int Character::getWit() {
    return wit;
}

void Character::setName(string _name) {
    name = _name;
}
void Character::setRPGClass(string _RPGClass) {
    RPGClass = _RPGClass;
}
void Character::setLife(int _life) {
    life = _life;
}
void Character::setAgility(int _agility) {
    agility = _agility;
}
void Character::setStrength(int _strength) {
    strength = _strength;
}
void Character::setWit(int _wit) {
    wit = _wit;
}

void Character::show() {

    cout << "Character is  " << name << " and he is : "
        << RPGClass << " with HP to :" << life << " a agility of : "<< agility<< " strength of : "<< strength<< "and wit of : "<<wit << " " << endl;
       
}

void Character::attack(string weapon) {
    cout << "[" << name << "] : Grrrrrrrrrr" << endl;
}