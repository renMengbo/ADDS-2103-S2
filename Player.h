#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <string>

class Player {
public:
    virtual ~Player() {} // Virtual destructor to ensure proper cleanup

    virtual Move* makeMove()  = 0; // Pure virtual function, must be implemented by derived classes
    virtual std::string getName()  = 0; // Pure virtual function, must be implemented by derived classes
};

#endif // PLAYER_H
