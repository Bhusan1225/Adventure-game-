#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    string name;
    int health, maxHealth;
    int meleeDamage, rangedDamage;
    int defense;
public:
    Character(string n, int h, int md, int rd, int d);
    virtual void attack(Character& target) = 0;
    virtual void takeDamage(int dmg);
    bool isAlive();
    void heal();
    string getName();
    int getHealth();
    int getMeleeDamage();
    int getDefense();
};

#endif