#include"HufTree.h"

struct Compare {
    bool operator()(HuffmanTreeNode* l, HuffmanTreeNode* r) {
        return l->freq > r->freq; // 使用最小堆  
    }
};

HuffmanTreeNode* merge(HuffmanTreeNode* left, HuffmanTreeNode* right) {
    HuffmanTreeNode* top = new HuffmanTreeNode('$', left->freq + right->freq); // 使用'$'作为内部节点的占位符  
    top->left = left;
    top->right = right;
    return top;
}
 
HuffmanTreeNode* buildHuffmanTree(const map<char, int>& freqMap) {
    priority_queue<HuffmanTreeNode*, vector<HuffmanTreeNode*>, Compare> minHeap;

    // 将所有字符节点加入最小堆  
    for (const auto& pair : freqMap) {
        minHeap.push(new HuffmanTreeNode(pair.first, pair.second));
    }

    // 从最小堆中取出两个频率最小的节点，合并它们，并将结果节点推回堆中  
    while (minHeap.size() != 1) {
        HuffmanTreeNode* left = minHeap.top();
        minHeap.pop();
        HuffmanTreeNode* right = minHeap.top();
        minHeap.pop();
        minHeap.push(merge(left, right));
    }

    // 堆中最后一个元素就是哈夫曼树的根节点  
    return minHeap.top();
}

void printCodes(HuffmanTreeNode* root, string str, map<char, string>& codes) {
    if (!root) return;
    if (root->data != '$') {
        // 如果是叶子节点，则保存哈夫曼编码  
        codes[root->data] = str;
    }
    printCodes(root->left, str + "0", codes);
    printCodes(root->right, str + "1", codes);
}

