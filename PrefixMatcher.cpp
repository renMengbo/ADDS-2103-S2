#include <bits/stdc++.h>
#include "PrefixMatcher.h"
using namespace std;

// class PrefixMatcher {

//     struct TrieNode {
//         TrieNode* children[2]; //0和1两个字符串
//         int ID = 0; //路由器标号
//         TrieNode()
//         {
//             for (int i = 0; i < 2; i++)
//                 children[i] = nullptr;
//         }
//     };
//     TrieNode* root;    

// public:
    // PrefixMatcher()
    // {
    //     root = new TrieNode(); 
    // }

    // ~PrefixMatcher()
    // {
    //     delete root;
    // }

    void PrefixMatcher::insert(string address, int routerNumber) { // 将一个路由添加到Trie树中
        int len = address.length();     
        TrieNode* current = root;
        for (int i = 0; i < len; i++) {
            char c = address[i];
    // cout << "insert:" << c <<"--"<< c-'0'<< endl;
            if (current->children[c-'0'] == nullptr) {
                current->children[c-'0'] = new TrieNode();
            }
            current = current->children[c-'0'];
        }
        current->ID = routerNumber; // ?
        // cout << "ID:" << routerNumber << endl << endl;
    }


    
  int  PrefixMatcher::selectRouter(string networkAddress){
        int result = 0;
        TrieNode* cur = root;
        for (char c : networkAddress) { 
        // for (int i = 0; i < networkAddress.length(); i++) {
            // cout<< "prefix:"<< c <<"--"<< c-'0'<< endl;
            if (cur->children[c-'0'] == nullptr) { // 如果该字符还没有插入到Trie树中
            break; //return; // 直接返回，因为不存在该字符开头的单词,此时result为空
            } else {
                cur = cur->children[c-'0']; // 继续向下遍历
                if (cur->ID) { // 如果当前节点是一个路由的结尾，说明找到了一个符合条件的路由               
                        result = cur->ID; // 将该单词添加到结果列表中              
                
                // cout<< "result:"<< result << endl << endl;       
                }
            }  
        }       
 
        // 还需要继续向下遍历才能找到最长的路由
        
            if (cur->children[1] != nullptr){
            selectRouter(networkAddress + '1');}

            if (cur->children[0] != nullptr){
            selectRouter(networkAddress + '0');}            

        // cout<< " networkAddress:"<< networkAddress << endl << endl; 
        // cout<< "--result L:"<< result << endl << endl; 
        return result;
    }

// };
