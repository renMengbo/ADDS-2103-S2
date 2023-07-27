#if !defined(PLAYER_H)
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
private:
    /* data */
public:
    Player(/* args */);
    ~Player();
    virtual char makeMove();
    string getName();
    string _name;
    char card;
};





#endif // PLAYER_H
