#ifndef GAMESTORY_H
#define GAMESTORY_H

#include <iostream>
#include "Level.h"  // Ensure you include the Level enum

using namespace std;

class GameStory {
public:
    static void introduction();
    static void levelNarrative(Level level);
    static void conclusion(bool victory);
};

#endif // GAMESTORY_H


