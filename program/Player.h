// File: Player.h
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Item.h"
#include "Room.h"
#include <vector>

// Derived class for players in the game
class Player : public Character {
private:
    std::vector<Item> inventory; // Inventory of items the player has
    Room* location;              // Current room the player is in

public:
    // Constructor to initialize player with name, health, attack power, and starting room
    Player(const std::string& n, int h, int a);
    
    // Method to move the player in a direction
    void move(const std::string& direction);
    
    // Method to pick up an item and add it to the inventory
    void pickUp(Item& item);
    
    // Method to engage in combat with a monster
    void engage(Monster& monster);
    
    // Method to take damage
    void takeDamage(int amount);
    
    // Method to heal the player
    void heal(int amount);
    
    // Method to display the player's stats
    void displayStats() const override;
    
    // Method to display the player's inventory
    void displayInventory() const;

    // Method to set the player's location
    void setLocation(Room* room);

    // Method to get the player's location
    Room* getLocation() const;
};

#endif
