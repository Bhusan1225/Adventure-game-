#ifndef BOSS_H
#define BOSS_H

#include "Enemy.h"

class Boss : public Enemy {
public:
    Boss();
    void attack(Character& target) override;
};

#endif // BOSS_H

