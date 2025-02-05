#include "../header/GameManager.h"

Enemy GameManager::spawnEnemy(Level level) {
    switch (level) {
    case Level::LEVEL_1:
        return (rand() % 2 == 0) ? Enemy("Goblin", 50, 8, 4, 1) : Enemy("Orc", 60, 10, 3, 2);
    case Level::LEVEL_2:
        return (rand() % 2 == 0) ? Enemy("Skeleton", 70, 12, 5, 2) : Enemy("Zombie", 75, 11, 6, 2);
    case Level::LEVEL_3:
        return (rand() % 2 == 0) ? Enemy("Dark Elf", 90, 14, 7, 3) : Enemy("Assassin", 85, 15, 6, 3);
    case Level::LEVEL_4:
        return (rand() % 2 == 0) ? Enemy("Fire Mage", 100, 16, 8, 4) : Enemy("Ice Witch", 95, 15, 9, 4);
    case Level::LEVEL_5:
        return (rand() % 2 == 0) ? Enemy("Dragonkin", 120, 18, 10, 5) : Enemy("Shadow Fiend", 110, 20, 9, 5);
    case Level::LEVEL_6:
        return Boss();
    }
    return Enemy("Unknown", 50, 5, 5, 1);
}

GameState GameManager::battle(Player& player, Enemy& enemy) {
    player.displayStats();
    std::cout << "You encountered a " << enemy.getName() << "! Prepare for battle!\n";

    while (player.isAlive() && enemy.isAlive()) {
        std::cout << "Choose Action: (1) Attack (2) Heal: ";
        int choice;
        std::cin >> choice;
        if (choice == 1) player.attack(enemy);
        else if (choice == 2) player.heal();

        if (enemy.isAlive()) enemy.attack(player);
    }

    if (player.isAlive()) {
        std::cout << "You defeated " << enemy.getName() << "!" << std::endl;
        player.levelUp();
        return GameState::WIN;
    }
    else {
        std::cout << "Game Over! You were defeated..." << std::endl;
        return GameState::LOSE;
    }
}