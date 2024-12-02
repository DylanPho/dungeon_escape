// File: Room.cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include "Room.h"

// Constructor for Room class, initializing with a description
Room::Room(const std::string& desc) : description(desc) {}

// Method to add an item to the room
void Room::addItem(const Item& item) {
    items.push_back(item);
}

// Method to remove an item from the room
void Room::removeItem(const Item& item) {
    // Implement removal logic
}

// Method to add a monster to the room
void Room::addMonster(const Monster& monster) {
    monsters.push_back(monster);
}

// Method to remove a monster from the room
void Room::removeMonster(const Monster& monster) {
    // Implement removal logic
}

// Method to get the description of the room
std::string Room::getDescription() const {
    return description;
}

// Method to get an adjacent room
Room* Room::getAdjacentRoom(const std::string& direction) const {
    auto it = adjacentRooms.find(direction);
    if (it != adjacentRooms.end()) {
        return it->second;
    }
    return nullptr;
}

// Method to set an adjacent room
void Room::setAdjacentRoom(const std::string& direction, Room* room) {
    adjacentRooms[direction] = room;
}
