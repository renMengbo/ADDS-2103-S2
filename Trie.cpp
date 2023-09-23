#include <iostream>
#include <string>
#include <vector>

#include "Trie.h"
using namespace std;


Trie::Trie() { // 构造函数，初始化Trie树为空
    root = new TrieNode();
}

Trie::~Trie() { // 析构函数，释放Trie树中存储的内存
    delete root;
}

void Trie::insert(string word) { // 将一个单词添加到Trie树中
    int len = word.length();
    TrieNode* current = root;
    for (int i = 0; i < len; i++) {
        char c = word[i];
// cout << "insert:" << c <<"--"<< c-'a'<< endl;
        if (current->children[c-'a'] == nullptr) {
            current->children[c-'a'] = new TrieNode();
        }
        current = current->children[c-'a'];
    }
    current->isEnd = true; // 将当前节点标记为单词结尾
// cout << "isEnd"<< endl << endl;
}

// 在Trie树中查找指定前缀的单词
void Trie::searchTrie(TrieNode* root, const string& prefix, vector<string>& result) {
    TrieNode* cur = root;
 // for (char c : prefix) { 
    for (int i = 0; i < prefix.size(); i++) {
        char c = tolower(prefix[i]); // 将字符转换为小写字母
        //cout<< "prefix:"<< c <<"--"<< c-'a'<< endl;
        if (cur->children[c-'a'] == nullptr) { // 如果该字符还没有插入到Trie树中
           break; //return; // 直接返回，因为不存在该字符开头的单词,此时result为空
        } else {
            cur = cur->children[c-'a']; // 继续向下遍历
        }
    }

    if (cur->isEnd) { // 如果当前节点是一个单词的结尾，说明找到了一个符合条件的单词
        result.push_back(prefix); // 将该单词添加到结果列表中
        //cout<< "Word:"<< prefix << endl;       
    }

    // 还需要继续向下遍历才能找到所有符合条件的单词
    for (char c = 'a'; c <= 'z'; c++) {
        if (cur->children[c-'a'] != nullptr) { // 如果该字符已经插入到Trie树中，则继续向下遍历下一个字符
            //cout<< "search:"<< prefix + c << endl;
            searchTrie(cur->children[c-'a'], prefix + c, result);
        }
    }

}

