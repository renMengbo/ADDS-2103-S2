#include "Human.h"
#include <iostream>

Human::Human(std::string name) : name(name) {}
Human::Human() { name = " Human "; 
}

Move* Human::makeMove() {
    std::string moveName = "Rock";
    std::cout << "Enter Move: ";
    std::cin >> moveName; // Assuming user enters full name of the move
    // Here you need to create and return the corresponding Move object based on moveName
    if (moveName == "Rock") {
        return new Rock();
    } else if (moveName == "Paper") {
        return new Paper();        
    } else if (moveName == "Scissors") {
        return new Scissors();
    } else if (moveName == "Robot") {
        return new Robot();
    } else if (moveName == "Monkey") {
        return new Monkey();
    } else if (moveName == "Pirate") {
        return new Pirate();
    } else if (moveName == "Ninja") {
        return new Ninja();
    } else if (moveName == "Zombie") {
        return new Zombie();
    } else {
        // Default to Rock if an invalid move is entered
        std::cout << "Invalid move. Defaulting to Rock." << std::endl;
        moveName == "Rock";
        return new Rock();
    }
}

std::string Human::getName() {
    return name;
}
