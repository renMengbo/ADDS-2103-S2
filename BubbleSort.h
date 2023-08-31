#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

class BubbleSort:public Sort
{
private:
    /* data */
public:
    BubbleSort(/* args */);
    std::vector<int> sort(std::vector<int> list) ;
    ~BubbleSort();
};
#endif//BUBBLESORT_H