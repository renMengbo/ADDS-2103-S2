#include "Referee.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;


Referee::Referee(/* args */)
{
}

Referee::~Referee()
{
}

void Referee::changeStringToChar(Player * player1, Player * player2){
  string moveString1 =player1->_move->getName();
  string moveString2 =player2->_move->getName();
  vector<string> str_array0 = {"Rock", "Scissors", "Paper"};
  // Monkey Zombie Robot Pirate Ninja
  vector<string> str_array1 = {"Monkey", "Zombie", "Robot", "Pirate", "Ninja"};
  vector<string> str_array, result;  
  int index1=-1,index2=-1,size = 0,_index=0,index=0;
  //Determines which rule's array the move string is in. 
  for (size_t i = 0; i < str_array0.size(); ++i) {
        if (str_array0[i] == moveString1) {
            index1 = i;
            size = str_array0.size(); //cout << size <<"--size 3" <<endl;
            str_array = str_array0;
        }
        if (str_array0[i] == moveString2) {
            index2 = i;          
        }        
  }
  for (size_t i = 0; i < str_array1.size(); ++i) {      
        if (str_array1[i] == moveString1) {
            index1 = i;
            size = str_array1.size(); //cout << size <<"--size 5" <<endl;
            str_array = str_array1;
        }
        if (str_array1[i] == moveString2) {
            index2 = i;          
        }        
  }

  if (index1==-1||index2==-1)
  {
    //cout << "The move string is not in the array of game rules!" <<endl;
    return;
  }
   
  //Find the nearest position of the two moves in the circular array, place the first move in the center of the array, and exclude the three possible positions of the second move.
  _index = index1; 
  result.push_back(str_array[_index]); 

  _index = (size+index1+1)%size ;   
  result.push_back(str_array[_index]);

  _index = (size+index1-1)%size ;   
  result.insert(result.begin(), str_array[_index]);

  // for (const auto& item : result) {
  //     std::cout << item << " ";
  // }
  // std::cout << std::endl;

//The first move takes the middle position 'S' and determines the position of the second move according to the game rules array
  player1-> card = 'S' ; // middle position
  size = result.size();  // size = 3 
  for (int i = 0; i < size; ++i) {
          if (result[i] == moveString2) {
            index = i;
            break;
          }
  }
  if (index==0)
  {
    player2-> card = 'R' ;
  }else if (index == 1)
  {
    player2-> card = 'S' ;
  }else 
  {
    player2-> card = 'P' ;
  }
}

Player *Referee::refGame(Player * player1, Player * player2){ 
    player1->makeMove(); 
    player2->makeMove();

    changeStringToChar(player1, player2);

    if (player1->card==player2->card)
    {
        return nullptr;
    }
    else if ((player1->card=='R'&& player2->card=='S')
      ||(player1->card=='P'&& player2->card=='R')
      ||(player1->card=='S'&& player2->card=='P')) 
    {
        return player1;
    }
    else
    {
        return player2;
    }
    
}