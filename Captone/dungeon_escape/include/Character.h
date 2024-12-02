// File: Character.h
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

// Base class for characters in the game
class Character {
protected:
    std::string name;   // Name of the character
    int health;         // Health of the character
    int attackPower;    // Attack power of the character

public:
    // Constructor to initialize character with name, health, and attack power
    Character(const std::string& n, int h, int a);
    
    // Virtual method for character to attack another character
    virtual void attack(Character& target);
    
    // Method to check if the character is still alive
    bool isAlive() const;
    
    // Pure virtual method to display character stats
    virtual void displayStats() const = 0;
};

#endif
