#if !defined(HUMAN_H)
#define HUMAN_H
#include <iostream>
#include "Player.h"
using namespace std;

class Human:public Player
{
private:
    /* data */
public:
    Human(string name);
     Human();
    ~Human();
    char makeMove();
};



#endif // HUMAN_H
