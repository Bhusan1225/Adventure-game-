#ifndef ENEMY_H
#define ENEMY_H

#include "../header/Charater.h"

class Enemy : public Character 
{
public:
    Enemy(string n, int h, int md, int rd, int d);
    void attack(Character& target) override;
};

#endif // ENEMY_H

