#include "Move.h"

Move::Move(/* args */) {}

Move::~Move() {}

string Move::getName() {
     return moveString; 
}

void Move::setName(string move){
     moveString = move;
}