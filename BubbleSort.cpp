#include "BubbleSort.h"

BubbleSort::BubbleSort(/* args */)
{
}

std::vector<int> BubbleSort::sort(std::vector<int> list) 
{
    int temp;
    int length =  list.size();
    for (int i = 0; i < length - 1; i++)
         for (int j = 0; j < length - 1 - i; j++)
            if (list.at(j)>list.at(j+1))
            {
                temp = list.at(j);
                list.at(j) = list.at(j+1);
                list.at(j+1) = temp;
            }
    return list;        
}

BubbleSort::~BubbleSort()
{
}