#ifndef PLAYER_H
#define PLAYER_H

#include "Charater.h"
#include "Level.h"

class Player : public Character {
private:
    Level currentLevel;
    bool hasSword, hasShield, hasArmour, hasBow;
public:
    Player(string n);
    void levelUp();
    void collectItem(string item);
    void attack(Character& target) override;
    void displayStats();
};

#endif // PLAYER_H

