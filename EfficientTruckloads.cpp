
#include <iostream>
#include <vector>
#include "EfficientTruckloads.h"
using namespace std;


EfficientTruckloads::EfficientTruckloads(/* args */)
{
  
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize, int truckNums=1) {
  
    // if (numCrates < 2 || numCrates > 10000 ||loadSize < 1 )
    // {
    //     cout << " ERROR";
    //     return 0;
    // }else 
    if (loadSize >= numCrates)
    {
        return truckNums;
    }
    else {
        
        truckNums = numTrucks((numCrates/2 + numCrates%2), loadSize, truckNums) + numTrucks(numCrates/2, loadSize,truckNums);
        //cout << " numCrates " << numCrates  <<" truckNums " <<truckNums <<endl ;
        return truckNums;
    }
}


EfficientTruckloads::~EfficientTruckloads()
{
}
