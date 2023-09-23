#ifndef TRIE_H
#define TRIE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Trie {
private:
    struct TrieNode {
        TrieNode* children[26]; // 子节点数组，存储每个字符对应的子节点
        bool isEnd; // 该节点是否为单词结尾
        TrieNode() {
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
            isEnd = false;
        }
    };

public:
    TrieNode* root; // Trie树的根节点
    Trie(); // 构造函数，初始化Trie树为空
    ~Trie(); // 析构函数，释放Trie树中存储的内存
    void insert(string word); // 将一个单词添加到Trie树中
    void searchTrie(TrieNode* root, const string& prefix, vector<string>& result);
};

#endif // TRIE_H