#if !defined(HUMAN_H)
#define HUMAN_H

#include "Player.h"
class Human : public Player {
 private:
  /* data */
 public:
  Human(/* args */);
  Human(string name);
  ~Human();
  // char makeMove();
  Move* makeMove();
};

#endif // HUMAN_H