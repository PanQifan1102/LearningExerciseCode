#pragma once
//ͷ�ļ�����
#include <iostream>  
#include <queue>  
#include <map>  
#include <string>  
#include <vector>  
using namespace std;
// ����һ�����������ڵ�ṹ��  
struct HuffmanTreeNode {
    char data; // �ַ�  
    int freq;  // Ƶ��  
    HuffmanTreeNode* left;
    HuffmanTreeNode* right;

    HuffmanTreeNode(char c, int f) : data(c), freq(f), left(nullptr), right(nullptr) {}
};
// ����ȽϺ���������std::priority_queue  
struct Compare;
// �ϲ������ڵ㣬�������µĽڵ�  
HuffmanTreeNode* merge(HuffmanTreeNode* left, HuffmanTreeNode* right);
// ������������  
HuffmanTreeNode* buildHuffmanTree(const map<char, int>& freqMap);
// ��ӡ����������  
void printCodes(HuffmanTreeNode* root, string str, map<char, string>& codes);