#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch(/* args */)
{
}

bool RecursiveBinarySearch::search(std::vector<int> list, int  ele)
{
   int p = 0;
   int q = list.size(); 
   if (binary_search(list,p,q,ele) == -1)
   {
        return false;
   }
   else
   {
        return true;
   }
}

int RecursiveBinarySearch::binary_search(std::vector<int> &list,int p,int q,int ele) {
    int mid = 0;
    //如果[p,q] 不存在，返回 -1
    if (p > q) {
        return -1;
    }
    // 找到中间元素所在的位置
    mid = p + (q - p) / 2;
    //递归的出口
    if (ele == list[mid]) {
        return mid;
    }
    //比较 ele 和 arr[mid] 的值，缩小 ele 可能存在的区域
    if (ele < list[mid]) {
        //新的搜索区域为 [p,mid-1]
        return binary_search(list, p, mid - 1, ele);
    }
    else {
        //新的搜索区域为 [mid+1,q]
        return binary_search(list, mid + 1, q, ele);
    }
}

RecursiveBinarySearch::~RecursiveBinarySearch()
{
}