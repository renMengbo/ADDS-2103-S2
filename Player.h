#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class Player
{
private:
    /* data */
public:
    char card;
    string _name;
    Player(/* args */);
    ~Player();
    virtual char makeMove();
    string getName();
};




#endif