#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human: public Player
{
private:
    /* data */
public:
    char makeMove();
    Human(/* args */);
    Human(string name);
    ~Human();
};





#endif