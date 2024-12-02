// File: Dungeon_Escape(main).cpp
// Name: Dylan Phoutthavong
// Date: July 19, 2024
// Capstone Project: Dungeon Escape

#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Room.h"
#include "Item.h"

int main() {
    // Initialize game elements
    Player player("Hero", 100, 15);
    Room startRoom("A dark and gloomy room with flickering torches on the walls.");
    Room nextRoom("A bright room filled with strange machinery.");
    Room thirdRoom("A room with an ancient stone altar.");

    // Set room connections
    startRoom.setAdjacentRoom("north", &nextRoom);
    nextRoom.setAdjacentRoom("south", &startRoom);
    nextRoom.setAdjacentRoom("north", &thirdRoom);
    thirdRoom.setAdjacentRoom("south", &nextRoom);

    std::cout << "startRoom north: " << startRoom.getAdjacentRoom("north") << std::endl;
    std::cout << "nextRoom south: " << nextRoom.getAdjacentRoom("south") << std::endl;
    std::cout << "nextRoom north: " << nextRoom.getAdjacentRoom("north") << std::endl;
    std::cout << "thirdRoom south: " << thirdRoom.getAdjacentRoom("south") << std::endl;

    Monster goblin("Goblin", 50, 10);
    startRoom.addMonster(goblin);

    Item potion("Health Potion", "Restores 50 health.");
    startRoom.addItem(potion);

    player.setLocation(&startRoom);

    // Game loop
    while (player.isAlive()) {
        std::cout << player.getLocation()->getDescription() << std::endl;

        std::cout << "Choose an action:\n";
        std::cout << "1. Move\n2. Inventory\n3. Engage\n4. Exit\n";
        std::string choice;
        std::cin >> choice;

        if (choice == "1") {
            std::cout << "Enter direction (north, south, east, west): ";
            std::string direction;
            std::cin >> direction;
            player.move(direction);
        } else if (choice == "2") {
            player.displayInventory();
        } else if (choice == "3") {
            player.engage(goblin);
        } else if (choice == "4") {
            break;
        } else {
            std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}
