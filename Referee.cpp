#include <iostream>
using namespace std;
#include "Referee.h"
Referee::Referee(/* args */)
{
}

Referee::~Referee()
{
}

Player * Referee::refGame(Player * player1, Player * player2){
    player1->makeMove();
    player2->makeMove();

    if (player1->card == player2->card)
    {
        return nullptr;
    }
    else if ((player1->card=='R' && player2->card =='S')||(player1->card=='P' && player2->card=='R')||(player1->card=='S' && player2->card=='P'))
    {        
        return player1;
    }
    else
    { 
        return player2;
    }

}