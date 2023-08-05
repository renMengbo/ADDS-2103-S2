#ifndef MOVE_H
#define MOVE_H
#include <string>
using namespace std;
class Move {
 private:
  string moveString;

 public:
  Move(/* args */);
  ~Move();
  string getName();
  void setName(string move);
};

#endif