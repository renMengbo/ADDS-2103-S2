#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
class Computer:public Player
{
private:
    /* data */
public:
    char makeMove();
    Computer(/* args */);
    ~Computer();
    
};





#endif