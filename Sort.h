#ifndef SORT_H
#define SORT_H
#include <vector>
using namespace std;

class Sort
{
private:
    /* data */
public:
    Sort(/* args */){};
    virtual std::vector<int> sort(std::vector<int> list) = 0;
    ~Sort(){};
};

//Sort::Sort(/* args */){} 放类外头文件包含时会重复调用。
//Sort::~Sort(){}


#endif //SORT_H