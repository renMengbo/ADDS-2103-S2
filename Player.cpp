#include "Player.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Player::Player(/* args */) {
   _name = "NULL"; 
   card=' ';
}

Player::~Player() 
{
}

// char Player::makeMove(){ 
//     return card;
// };

Move* Player::makeMove(){
  return _move;  
}

string Player::getName() { 
  return _name; 
}