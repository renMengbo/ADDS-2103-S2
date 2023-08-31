#include <iostream>
using namespace std;

#include "QuickSort.h"

QuickSort::QuickSort(/* args */)
{
}
//QuickSort
//Do nothing if left <= right
//p <- Get a number from array
//Put elements <= p to the left side
//Put elements >= p to the right side
//Put p in the middle slot which index is pivot
//Recursive quicksort the left parts and right parts
std::vector<int> QuickSort::sort(std::vector<int> list) 
{  
    int len = list.size();    
    Quick_Sort(list, 0, len-1);
    return list;
}

void QuickSort::Quick_Sort(std::vector<int> &list, int start, int end) 
 {
    if (start >= end)   return; 

    int temp,pivot; 

    if ((start+2) < end) //0+2 <3  0-1-2-3 swap(list[3], list[end])
    {   temp = list[start+2];
        list[start+2] = list[end];
        list[end] =temp;
    }

    pivot  = list[end]; 
    int left = start, right = end - 1;
    while (left < right) 
    {
        while (list[left]  <  pivot  && left < right)  left++;
        while (list[right] >= pivot  && left < right)  right--;
           
        //swap(list[left], list[right]);左右指针向中间搜索，停止的位置在左大于基准，右小于基准，或指针重合
        {   temp = list[left];
            list[left] = list[right];
            list[right] =temp;
        }

    }

    if (list[left] >= list[end]) // 左边大于基准，交换基准和左指针值
       // swap(list[left], list[end]); pivot
    {   temp = list[left];
        list[left] = list[end];
        list[end] =temp;
    }
    else
    {
        left++;
    }
    
    if (left)  {Quick_Sort(list, start, left - 1);}

    Quick_Sort(list, left + 1, end);
 }


QuickSort::~QuickSort()
{
}