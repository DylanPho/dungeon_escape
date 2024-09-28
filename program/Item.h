// File: Item.h
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#ifndef ITEM_H
#define ITEM_H

#include <string>

// Class to represent items in the game
class Item {
private:
    std::string name;        // Name of the item
    std::string description; // Description of the item

public:
    // Constructor to initialize item with name and description
    Item(const std::string& n, const std::string& desc);
    
    // Method to get the name of the item
    std::string getName() const;
    
    // Method to get the description of the item
    std::string getDescription() const;
    
    // Method to use the item
    void use();
};

#endif
