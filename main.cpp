#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    std::string playerName;
    std::cout << "Enter player name (default: Human): ";
    std::getline(std::cin, playerName);
    if (playerName.empty()) {
        playerName = "Human";
    }

    Player* humanPlayer = new Human(playerName);
    Player* computerPlayer = new Computer();

    std::cout << "Input: Zombie Ninja" << std::endl;

    // Assuming moves Zombie and Ninja are defined
    // Here, we're simulating the moves for computer player as Rock always
 
    Move* computerMove = new Rock(); // Computer's move always Rock

    std::cout << "Expecting: John Human Computer Zombie Ninja Rock Rock" << std::endl;

    Referee referee;
    Player* winner = referee.refGame(humanPlayer, computerPlayer);

    std::cout << winner->getName() << " wins!" << std::endl;

    return 0;
}
