#include "../header/Charater.h"

Character::Character(string n, int h, int md, int rd, int d)
    : name(n), health(h), maxHealth(h), meleeDamage(md), rangedDamage(rd), defense(d)
{}

void Character::takeDamage(int dmg) 
{
    int actualDamage = max(0, dmg - defense);
    health = max(0, health - actualDamage);
    cout << name << " takes " << actualDamage << " damage! Remaining health: " << health << endl;
}

bool Character::isAlive() 
{
    return health > 0;
}

void Character::heal() 
{
    health = maxHealth;
    cout << name << " heals back to full health!" << endl;
}

string Character::getName() 
{
    return name;
}

int Character::getHealth() 
{
    return health;
}

int Character::getMeleeDamage() 
{
    return meleeDamage;
}

int Character::getDefense() 
{
    return defense;
}
