// File: Monster.h
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"
#include <iostream>

// Derived class for monsters in the game
class Monster : public Character {
public:
    // Constructor to initialize monster with name, health, and attack power
    Monster(const std::string& n, int h, int a);
    
    // Method to display the monster's stats
    void displayStats() const override;
    
    // Method to take damage
    void takeDamage(int amount);
    
    // Method to get the monster's attack power
    int getAttackPower() const;

    // Method to get the monster's name
    std::string getName() const;
};

#endif
