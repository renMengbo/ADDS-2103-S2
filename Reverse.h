#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
using namespace std;

class Reverse
{
private:
    /* data */
public:    
    Reverse(/* args */);
    int reverseDigit(int value); 
    string reverseString(string letters);
    ~Reverse();
};

#endif //REVERSE_H