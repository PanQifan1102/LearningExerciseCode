#include"HufTree.h"

struct Compare {
    bool operator()(HuffmanTreeNode* l, HuffmanTreeNode* r) {
        return l->freq > r->freq; // ʹ����С��  
    }
};

HuffmanTreeNode* merge(HuffmanTreeNode* left, HuffmanTreeNode* right) {
    HuffmanTreeNode* top = new HuffmanTreeNode('$', left->freq + right->freq); // ʹ��'$'��Ϊ�ڲ��ڵ��ռλ��  
    top->left = left;
    top->right = right;
    return top;
}
 
HuffmanTreeNode* buildHuffmanTree(const map<char, int>& freqMap) {
    priority_queue<HuffmanTreeNode*, vector<HuffmanTreeNode*>, Compare> minHeap;

    // �������ַ��ڵ������С��  
    for (const auto& pair : freqMap) {
        minHeap.push(new HuffmanTreeNode(pair.first, pair.second));
    }

    // ����С����ȡ������Ƶ����С�Ľڵ㣬�ϲ����ǣ���������ڵ��ƻض���  
    while (minHeap.size() != 1) {
        HuffmanTreeNode* left = minHeap.top();
        minHeap.pop();
        HuffmanTreeNode* right = minHeap.top();
        minHeap.pop();
        minHeap.push(merge(left, right));
    }

    // �������һ��Ԫ�ؾ��ǹ��������ĸ��ڵ�  
    return minHeap.top();
}

void printCodes(HuffmanTreeNode* root, string str, map<char, string>& codes) {
    if (!root) return;
    if (root->data != '$') {
        // �����Ҷ�ӽڵ㣬�򱣴����������  
        codes[root->data] = str;
    }
    printCodes(root->left, str + "0", codes);
    printCodes(root->right, str + "1", codes);
}

