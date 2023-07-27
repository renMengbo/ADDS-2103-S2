#include "Human.h"
#include <iostream>
using namespace std;
Human::Human(/* args */)
{
   _name=" Human " ;
}
Human::Human(string name)
{
 _name=name;   
}

Human::~Human()
{
}
char Human::makeMove(){
    cout <<"please inter you choose.R for rock P for paper S for scissor: " <<endl;
    cin >> card ;
    return card;
}
