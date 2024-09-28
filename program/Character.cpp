// File: Character.cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include "Character.h"

// Constructor for Character class, initializing name, health, and attack power
Character::Character(const std::string& n, int h, int a) : name(n), health(h), attackPower(a) {}

// Method to perform an attack on another character, reducing their health by the attack power of this character
void Character::attack(Character& target) {
    target.health -= this->attackPower;
}

// Method to check if the character is still alive (health greater than 0)
bool Character::isAlive() const {
    return health > 0;
}
