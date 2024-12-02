// File: Monster.cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include "Monster.h"

// Constructor for Monster class, initializing with name, health, and attack power
Monster::Monster(const std::string& n, int h, int a) : Character(n, h, a) {}

// Method to display the monster's stats
void Monster::displayStats() const {
    std::cout << "Monster: " << name << "\nHealth: " << health << "\nAttack Power: " << attackPower << std::endl;
}

// Method to take damage
void Monster::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
}

// Method to get the monster's attack power
int Monster::getAttackPower() const {
    return attackPower;
}

// Method to get the monster's name
std::string Monster::getName() const {
    return name;
}
