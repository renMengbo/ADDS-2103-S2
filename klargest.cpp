#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k)
{

    priority_queue<int, vector<int>, greater<int>> max_heap; // 创建一个最大堆对象
    
    for (int value : values) {
        max_heap.push(value); // 将值添加到最大堆中
        if (max_heap.size() > k) { // 如果堆的大小超过了k,则从堆中移除最小值并将其添加回原始向量中
            max_heap.pop();
            values.push_back(max_heap.top());
        }
    }
    
    return max_heap.top(); // 返回第k大的值
}