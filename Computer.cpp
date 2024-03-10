#include "Computer.h"

Computer::Computer() : name("Computer") {}

Move* Computer::makeMove() {
    // Always return a Move object representing "Rock"
    return new Rock();
}

std::string Computer::getName()  {
    return name;
}
