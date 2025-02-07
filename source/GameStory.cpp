#include "../header/GameStory.h"


void GameStory::introduction() {
    cout << "Welcome, Hero! Your village has been terrorized by the evil Murlocs and their minions. "
        << "You must fight through six levels of fierce enemies to defeat them and restore peace!" << endl;
}

void GameStory::levelNarrative(Level level) {
    cout << "\nLevel " << static_cast<int>(level) + 1 << " begins..." << endl;
    switch (level) {
    case Level::LEVEL_1:
        cout << "You enter the dark forest where goblins and orcs lurk in the shadows..." << endl;
        break;
    case Level::LEVEL_2:
        cout << "A haunted graveyard lies ahead, filled with skeletons and zombies!" << endl;
        break;
    case Level::LEVEL_3:
        cout << "The path takes you to an abandoned fortress, now home to assassins and dark elves..." << endl;
        break;
    case Level::LEVEL_4:
        cout << "A sorcerer’s lair appears before you. Fire mages and ice witches test your strength..." << endl;
        break;
    case Level::LEVEL_5:
        cout << "Deep in the mountains, dragonkin and shadow fiends await your challenge!" << endl;
        break;
    case Level::LEVEL_6:
        cout << "You have reached the final battle. The Murlocs stand before you!" << endl;
        break;
    }
}

void GameStory::conclusion(bool victory) {
    if (victory) {
        cout << "Congratulations! You defeated the Murlocs and saved your village!" << endl;
    }
    else {
        cout << "You fought bravely, but the village remains in danger. Try again, Hero!" << endl;
    }
}