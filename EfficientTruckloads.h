
#ifndef EFFICIENTRUCKLOADS_H
#define EFFICIENTRUCKLOADS_H

#include <iostream>
#include <vector>
using namespace std;

class EfficientTruckloads
{
private:
    std::vector<int> TrucksTable;
public:
    EfficientTruckloads(/* args */);
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();
};

#endif //EFFICIENTRUCKLOADS_H