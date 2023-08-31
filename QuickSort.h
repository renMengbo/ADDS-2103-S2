#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort:public Sort
{
private:
    /* data */
public:
    QuickSort(/* args */);
    std::vector<int> sort(std::vector<int> list) ;
    void Quick_Sort(std::vector<int> &list, int start, int end) ;    
    ~QuickSort();
};
#endif //QUICKSORT_H