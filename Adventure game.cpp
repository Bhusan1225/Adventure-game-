#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "header/GameManager.h"

int main() {
    srand(time(0));
    Player hero("Hero");
    Level currentLevel = Level::LEVEL_1;

    while (currentLevel != Level::LEVEL_6) {
        Enemy enemy = GameManager::spawnEnemy(currentLevel);
        GameState result = GameManager::battle(hero, enemy);
        if (result == GameState::LOSE) return 0;
        currentLevel = static_cast<Level>(static_cast<int>(currentLevel) + 1);
    }

    // Final Boss Battle
    Boss finalBoss;
    GameState finalResult = GameManager::battle(hero, finalBoss);
    if (finalResult == GameState::WIN) {
        cout << "Congratulations! You defeated Murlocs and saved your village!" << endl;
    }
    return 0;
}
