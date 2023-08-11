#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
using namespace std;

class Reverser
{
private:
    /* data */
public:    
    Reverser(/* args */);
    int reverseDigit(int value); 
    string reverseString(string letters);
    ~Reverser();
};

#endif //REVERSER_H