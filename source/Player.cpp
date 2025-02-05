#include "../header/Player.h"
Player::Player(string n)
    : Character(n, 100, 10, 5, 2), currentLevel(Level::LEVEL_1), hasSword(false), hasShield(false), hasArmour(false), hasBow(false) {
}

void Player::levelUp() 
{
    if (currentLevel == Level::LEVEL_6) {
        cout << "You have reached the final level!" << endl;
        return;
    }

    currentLevel = static_cast<Level>(static_cast<int>(currentLevel) + 1);
    maxHealth += 20;
    health = maxHealth;
    meleeDamage += 5;
    defense += 2;
    cout << "Level Up! You are now level " << static_cast<int>(currentLevel) + 1 << "! Stats improved!" << endl;
}

void Player::collectItem(string item) 
{
    if (item == "Sword")
    {
        hasSword = true;
    }
    else if (item == "Shield")
    {
        hasShield = true;
    }
    else if (item == "Armour") 
    { 
        hasArmour = true; 
    }
    else if (item == "Bow") {
        hasBow = true;
    }
    cout << "You obtained " << item << "!" << endl;
}

void Player::attack(Character& target) 
{
    int damage = meleeDamage;
    if (hasSword) damage += 5;
    cout << name << " attacks for " << damage << " damage!" << endl;
    target.takeDamage(damage);
}

void Player::displayStats() 
{
    cout << "\nPlayer Stats:" << endl;
    cout << "Health: " << health << " / " << maxHealth << endl;
    cout << "Melee Damage: " << meleeDamage << endl;
    cout << "Defense: " << defense << "\n" << endl;
}