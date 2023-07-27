#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main(){
    Computer player1;
    Human player2("RMB");
    Referee player3;
    Player * WINNER=player3.refGame(&player1,&player2);
    if (WINNER==nullptr)
    {
        cout<<"tie"<<endl;
    }
    else
    {
        cout<<WINNER->getName()<<endl;
    }
    
    
    return 0;

}