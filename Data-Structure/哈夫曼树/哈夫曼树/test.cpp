#include"HufTree.h"

int main() {
    // 示例字符频率  
    map<char, int> freqMap = { {'a', 5}, {'b', 9}, {'c', 12}, {'d', 13}, {'e', 16}, {'f', 45} };

    // 构建哈夫曼树  
    HuffmanTreeNode* root = buildHuffmanTree(freqMap);

    // 打印每个字符的哈夫曼编码  
    map<char, string> codes;
    printCodes(root, "", codes);

    // 输出结果  
    for (const auto& pair : codes) {
        cout << pair.first << ": " << pair.second << endl;
    }
     
    return 0;
}