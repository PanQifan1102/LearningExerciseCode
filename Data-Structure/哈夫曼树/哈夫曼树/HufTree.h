#pragma once
//头文件包含
#include <iostream>  
#include <queue>  
#include <map>  
#include <string>  
#include <vector>  
using namespace std;
// 定义一个哈夫曼树节点结构体  
struct HuffmanTreeNode {
    char data; // 字符  
    int freq;  // 频率  
    HuffmanTreeNode* left;
    HuffmanTreeNode* right;

    HuffmanTreeNode(char c, int f) : data(c), freq(f), left(nullptr), right(nullptr) {}
};
// 定义比较函数，用于std::priority_queue  
struct Compare;
// 合并两个节点，并返回新的节点  
HuffmanTreeNode* merge(HuffmanTreeNode* left, HuffmanTreeNode* right);
// 构建哈夫曼树  
HuffmanTreeNode* buildHuffmanTree(const map<char, int>& freqMap);
// 打印哈夫曼编码  
void printCodes(HuffmanTreeNode* root, string str, map<char, string>& codes);