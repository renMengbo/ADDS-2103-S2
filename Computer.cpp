#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer(/* args */) { 
  _name = " Computer "; 
}
Computer::~Computer() {}
Move* Computer::makeMove() {
  string move;
  cout << "please intput Computer move: " << endl;
  cin >> move;
  _move->setName(move);
  return _move;
}