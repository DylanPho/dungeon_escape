// File: Item.cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include "Item.h"
#include <iostream>

// Constructor for Item class, initializing with name and description
Item::Item(const std::string& n, const std::string& desc) : name(n), description(desc) {}

// Method to get the name of the item
std::string Item::getName() const {
    return name;
}

// Method to get the description of the item
std::string Item::getDescription() const {
    return description;
}

// Method to use the item
void Item::use() {
    std::cout << "Using " << name << ".\n";
}
