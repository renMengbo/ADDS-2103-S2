#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>
using namespace std;

class RecursiveBinarySearch
{
private:
    /* data */
public:
    RecursiveBinarySearch(/* args */); 
    bool search(std::vector<int>, int);  
    int binary_search(std::vector<int> &list,int p,int q,int ele); 
    ~RecursiveBinarySearch();
};



#endif //RECURSIVEBINARYSEARCH_H