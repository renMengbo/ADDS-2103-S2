#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(/* args */) { 
  _name = " Human "; 
}
Human::Human(string name) { 
  _name = name; 
}

Human::~Human() {

}

// char Human::makeMove(){
//     cout << "please input R P S" <<endl;
//     cin >> card;
//     return card;
// }

Move* Human::makeMove() {
  string move;
  cout << "Enter Move:" << endl;
  cin >> move;
 // cout <<"move: "<< move <<endl;
  _move->setName(move);

 // cout <<"_move: "<< _move->getName() <<endl;
  return _move;
}
