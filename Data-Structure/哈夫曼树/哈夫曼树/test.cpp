#include"HufTree.h"

int main() {
    // ʾ���ַ�Ƶ��  
    map<char, int> freqMap = { {'a', 5}, {'b', 9}, {'c', 12}, {'d', 13}, {'e', 16}, {'f', 45} };

    // ������������  
    HuffmanTreeNode* root = buildHuffmanTree(freqMap);

    // ��ӡÿ���ַ��Ĺ���������  
    map<char, string> codes;
    printCodes(root, "", codes);

    // ������  
    for (const auto& pair : codes) {
        cout << pair.first << ": " << pair.second << endl;
    }
     
    return 0;
}