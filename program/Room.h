// File: Room.h
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include <map>
#include "Item.h"
#include "Monster.h"

// Class to represent each room in the dungeon
class Room {
private:
    std::string description;            // Description of the room
    std::vector<Item> items;            // Items in the room
    std::vector<Monster> monsters;      // Monsters in the room
    std::map<std::string, Room*> adjacentRooms; // Connections to other rooms

public:
    // Constructor to initialize room with a description
    Room(const std::string& desc);
    
    // Method to add an item to the room
    void addItem(const Item& item);
    
    // Method to remove an item from the room
    void removeItem(const Item& item);
    
    // Method to add a monster to the room
    void addMonster(const Monster& monster);
    
    // Method to remove a monster from the room
    void removeMonster(const Monster& monster);
    
    // Method to get the description of the room
    std::string getDescription() const;
    
    // Method to get an adjacent room
    Room* getAdjacentRoom(const std::string& direction) const;
    
    // Method to set an adjacent room
    void setAdjacentRoom(const std::string& direction, Room* room);
};

#endif
