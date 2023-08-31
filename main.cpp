#include <iostream>
#include <vector>
using namespace std;

//#include "Sort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

int main()
{
    cout <<" Input:"  ; 
    std::vector<int> list,L;    

    int temp;
    while (cin >> temp) 
    {
        L.push_back(temp); 
        if (cin.get() == '\n') break;    
    }
    

    //for (long unsigned int i = 0; i < L.size(); i++){cout << L.at(i) <<" ";}
    //std::vector<int> L ={6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199,-156, -186, 43, -189};
    BubbleSort B1;
    //list = B1.sort(L);
    QuickSort Q1;
    list =Q1.sort(L);

    RecursiveBinarySearch  RBS1;
    std::string S = RBS1.search(list,1) ? "true" :"false";
    cout << S << " ";

    for (long unsigned int i = 0; i < list.size(); i++)
    {
        cout << list.at(i) <<" ";
    }
    cout << endl;
    return 0;
}
//g++ -o main.out -std=c++11 -O2 -Wall *.cpp