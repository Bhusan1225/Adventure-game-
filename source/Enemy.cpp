#include "../header/Enemy.h"




Enemy::Enemy(string n, int h, int md, int rd, int d)
    : Character(n, h, md, rd, d) 
{}

void Enemy::attack(Character& target) 
{
    cout << name << " attacks for " << meleeDamage << " damage!" << endl;
    target.takeDamage(meleeDamage);
}