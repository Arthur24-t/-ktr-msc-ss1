#include <string>

using namespace std;

#ifndef Character_h
#define Character_h

class Character {
protected:
    string name;
    string RPGClass;
    int life;
    int agility;
    int strength;
    int wit;

public:

    Character();
    Character(string, string, int, int, int, int);
    
    string getName();
    string getRPGClass();
    int getLife();
    int getAgility();
    int getStrength();
    int getWit();

    void setName(string);
    void setRPGClass(string);
    void setLife(int);
    void setAgility(int);
    void setStrength(int);
    void setWit(int);

    void show();
    void attack(string);
};




#endif