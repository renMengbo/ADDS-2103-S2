#include <iostream>
#include <string>
#include <vector>
// #include "trie.h" // 引入Trie树的头文件
#include "Trie.h"
#include "Autocomplete.h"
using namespace std;

vector<string> Autocomplete::getSuggestions(string partialWord) {
    vector<string> result;
    // TrieNode* current = trie->root;
    trie->searchTrie(trie->root, partialWord, result);    
    return result;
}

void Autocomplete::insert(string word) { // 将一个单词添加到已知单词列表中
    trie->insert(word); // 直接调用Trie树的插入方法将单词添加到Trie树中
}
