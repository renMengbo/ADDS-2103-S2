#include "Referee.h"
#include "Move.h"
#include <iostream>

Referee::Referee() {}

Player* Referee::refGame( Player* player1,  Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // Determine the winner based on the moves
    if (move1->getName() == "Rock") {
        if (move2->getName() == "Scissors") {
            //std::cout << player1->getName() << " wins with Rock!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Paper") {
            //std::cout << player2->getName() << " wins with Paper!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player2);
        }
    } else if (move1->getName() == "Scissors") {
        if (move2->getName() == "Paper") {
            //std::cout << player1->getName() << " wins with Scissors!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Rock") {
            //std::cout << player2->getName() << " wins with Rock!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player2);
        }
    } else if (move1->getName() == "Paper") {
        if (move2->getName() == "Rock") {
            //std::cout << player1->getName() << " wins with Paper!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Scissors") {
            //std::cout << player2->getName() << " wins with Scissors!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player2);
        }
    } else if (move1->getName() == "Monkey") {
        if (move2->getName() == "Ninja" || move2->getName() == "Robot") {
            //std::cout << player1->getName() << " wins with Monkey!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        }
    } else if (move1->getName() == "Robot") {
        if (move2->getName() == "Ninja") {
            //std::cout << player1->getName() << " wins with Robot!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Zombie") {
            //std::cout << player1->getName() << " wins with Robot!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        }
    } else if (move1->getName() == "Pirate") {
        if (move2->getName() == "Robot") {
            //std::cout << player1->getName() << " wins with Pirate!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Monkey") {
            //std::cout << player1->getName() << " wins with Pirate!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        }
    } else if (move1->getName() == "Ninja") {
        if (move2->getName() == "Pirate") {
            //std::cout << player1->getName() << " wins with Ninja!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Zombie") {
            //std::cout << player1->getName() << " wins with Ninja!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        }
    } else if (move1->getName() == "Zombie") {
        if (move2->getName() == "Pirate") {
            //std::cout << player1->getName() << " wins with Zombie!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        } else if (move2->getName() == "Monkey") {
            //std::cout << player1->getName() << " wins with Zombie!" << std::endl;
            delete move1;
            delete move2;
            return const_cast<Player*>(player1);
        }
    }

    // If none of the above conditions are met, it's a tie
    std::cout << "Tie" << std::endl;
    delete move1;
    delete move2;
    return nullptr;
}
