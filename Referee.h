#if !defined(REFEREE_H)
#define REFEREE_H

#include "Player.h"

class Referee
{
private:
    /* data */
public:
    Referee(/* args */);
    ~Referee();
    void changeStringToChar(Player * player1, Player * player2);
    Player * refGame(Player * player1, Player * player2);
};





#endif // REFEREE_H