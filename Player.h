#if !defined(PLAYER_H)
#define PLAYER_H
#include <string>

#include "Move.h"
using namespace std;

class Player {
 private:
    /* data */
 public:
  Move* _move = new Move;  
  string _name;
  char card;

  Player(/* args */);
  ~Player();
  //virtual char makeMove();
  virtual Move* makeMove();
  string getName();
};

#endif // PLAYER_H