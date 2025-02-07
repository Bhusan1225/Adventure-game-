#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <cstdlib>
#include "../header/Player.h"
#include "../header/Enemy.h"
#include "../header/Boss.h"
#include "../header/GameState.h"
#include "../header/Level.h"

class GameManager {
public:
    static Enemy spawnEnemy(Level level);
    static GameState battle(Player& player, Enemy& enemy);
};

#endif // GAMEMANAGER_H

