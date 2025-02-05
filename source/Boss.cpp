#include "../header/Boss.h"


#include <iostream>
#include <cstdlib>  // For rand()

using namespace std;

Boss::Boss() : Enemy("Murlocs", 300, 20, 10, 5) {}

void Boss::attack(Character& target) {
    int damage = meleeDamage + (rand() % 10);
    cout << "Murlocs unleashes a powerful strike for " << damage << " damage!" << endl;
    target.takeDamage(damage);
}