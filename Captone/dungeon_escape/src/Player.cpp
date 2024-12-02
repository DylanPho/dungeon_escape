// File: Player.cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include "Player.h"
#include <iostream>

// Constructor for Player class
Player::Player(const std::string& n, int h, int a) : Character(n, h, a), location(nullptr) {}

// Method to move the player in a direction
void Player::move(const std::string& direction) {
    if (location) {
        Room* newRoom = location->getAdjacentRoom(direction);
        if (newRoom) {
            location = newRoom;
            std::cout << "You moved to the " << direction << " room.\n";
            std::cout << location->getDescription() << std::endl;
        } else {
            std::cout << "You can't move in that direction.\n";
        }
    }
}

// Method to pick up an item and add it to the inventory
void Player::pickUp(Item& item) {
    inventory.push_back(item);
    std::cout << "You have picked up " << item.getName() << ".\n";
}

// Method to engage in combat with a monster
void Player::engage(Monster& monster) {
    while (this->isAlive() && monster.isAlive()) {
        // Player attacks monster
        monster.takeDamage(this->attackPower);
        if (!monster.isAlive()) {
            std::cout << "You have defeated the " << monster.getName() << "!\n";
            break;
        }

        // Monster attacks player
        this->takeDamage(monster.getAttackPower());
        if (!this->isAlive()) {
            std::cout << "You have been defeated by the " << monster.getName() << "...\n";
        }
    }
}

// Method to take damage
void Player::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
}

// Method to heal the player
void Player::heal(int amount) {
    health += amount;
}

// Method to display the player's stats
void Player::displayStats() const {
    std::cout << "Player: " << name << "\nHealth: " << health << "\nAttack Power: " << attackPower << std::endl;
}

// Method to display the player's inventory
void Player::displayInventory() const {
    std::cout << "Inventory:\n";
    for (const auto& item : inventory) {
        std::cout << "- " << item.getName() << ": " << item.getDescription() << "\n";
    }
}

// Method to set the player's location
void Player::setLocation(Room* room) {
    location = room;
}

// Method to get the player's location
Room* Player::getLocation() const {
    return location;
}
