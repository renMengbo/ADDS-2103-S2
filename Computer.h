#if !defined(COMPUTER_H)
#define COMPUTER_H
#include "Player.h"

class Computer:public Player
{
private:
    /* data */
public:
    Computer(/* args */);
    ~Computer();
    char makeMove();

};


#endif // COMPUTER_H
