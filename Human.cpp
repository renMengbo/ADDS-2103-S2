#include "Human.h"
#include <iostream>
using namespace std;

Human::Human(string name)
{
    _name=name;

}
Human::Human()
{
    _name="human";

}

Human::~Human()
{
}

char Human::makeMove(){
    cout << "please input R P S"<<endl;
    cin>>card;
    return card;
}