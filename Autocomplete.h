
#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <string>
#include <vector>
#include "Trie.h"// 引入Trie树的头文件
using namespace std;

class Autocomplete {
public:
    Trie* trie = new Trie; // Trie树的指针
    vector<string> getSuggestions(string partialWord); // 获取给定前缀的所有可能单词
    void insert(string word); // 将一个单词添加到已知单词列表中
    // Autocomplete (){Trie* trie = new Trie; }
    // ~Autocomplete (){delete trie ; }

private:

};

#endif // AUTOCOMPLETE_H