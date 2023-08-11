#include <iostream>
#include "Truckloads.h"
using namespace std;

Truckloads::Truckloads(/* args */)
{
}

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    //cout << " numCrates: "<<  numCrates << " loadSize: "<<  loadSize <<endl;
   if (numCrates < 2 || numCrates > 10000 || loadSize < 1 )
    {
        //cout << " ERROR" <<endl;
        return 1;
    }else  if (loadSize >= numCrates) 
    {return 1;}
    else
    {   
        return numTrucks(numCrates/2 + numCrates%2, loadSize) + numTrucks(numCrates/2, loadSize);
    }
 
}

Truckloads::~Truckloads()
{
}
