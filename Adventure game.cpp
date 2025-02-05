#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "header/GameManager.h"
#include "header/GameStory.h"

int main() {
    srand(time(0));

    GameStory::introduction();
    Player hero("Hero"); // hero sponned here 
    Level currentLevel = Level::LEVEL_1;

    while (currentLevel != Level::LEVEL_6) 
    {
        GameStory::levelNarrative(currentLevel);
        
        Enemy enemy = GameManager::spawnEnemy(currentLevel); //enemysponner here
        
        GameState result = GameManager::battle(hero, enemy);
        if (result == GameState::LOSE) {
            GameStory::conclusion(false);
            return 0;
        }
        currentLevel = static_cast<Level>(static_cast<int>(currentLevel) + 1);
    }

    // Final Boss Battle
    GameStory::levelNarrative(Level::LEVEL_6);
    Boss finalBoss;
    GameState finalResult = GameManager::battle(hero, finalBoss);
    GameStory::conclusion(finalResult == GameState::WIN);
    return 0;
}
