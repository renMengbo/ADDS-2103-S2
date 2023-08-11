#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>
#include "Reverser.h"
using namespace std;


Reverser::Reverser(/* args */)
{
  
}

int Reverser::reverseDigit(int value) 
{   
    //cout << "Digit = " << value <<"  value%10 = " << value%10 << endl;
   
	if (value < 0)
    {
        return -1; //ERROR
	}else if (value<10) //last
    {       
		//cout << endl ;    
        return value;
	}else{ 
        int size=0;
        for (int i=value; i; i/=10) size++;                   
        return value%10 *(int)pow(10, size-1) + reverseDigit(value/10);       
        
        //cout << value%10 ;             
		//return reverseDigit(value/10);
	}
}

string Reverser::reverseString(string letters)
{   
         //cout <<"1:" << letters <<endl;
         
        if (letters.size()<=1)
        {
            return letters;
        }
        string  Reverse = reverseString(letters.substr(1,letters.size()-2));
    
        Reverse.insert(0,1,letters[letters.size()-1]);
        Reverse.push_back(letters[0]);
        //cout <<" "<< Reverse ;
        return Reverse;
       
}

Reverser::~Reverser()
{
}
