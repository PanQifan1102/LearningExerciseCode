#include"Map.h"
#include"Map.cpp"

//void test1() // �ڽӱ�������ͼ
//{
//    // ����һ������5�������ͼ  
//    Graph g(5);
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // ��ӡͼ  
//    g.printGraph();
//}

//void test2() // �ڽӱ�������ͼ
//{
//    // ����һ������5�����������ͼ  
//    Graph g(5);
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0); // ע������������ߣ�������ͼ��ͬ  
//    g.addEdge(2, 3);
//    g.addEdge(3, 3); // ������ָ������ı�  
//
//    // ��ӡͼ  
//    g.printGraph();
//}

//void test3() // �ڽӾ��󹹽�����ͼ
//{
//    // ����һ������5�����������ͼ  
//    Graph g(5);
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // ��ӡͼ  
//    g.printGraph();
//}

//void test4() // �ڽӾ��󹹽�����ͼ
//{
//    // ����һ������5�����������ͼ  
//    Graph g(5);
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0); // ע�������������  
//    g.addEdge(2, 3);
//    // ע��û����Ӵ�3��2���4��0�ıߣ���Ϊ������ͼ  
//
//    // ��ӡͼ  
//    g.printGraph();
//}

//void test5() // �ǵݹ鷽ʽʵ��ͼ���������
//{
//    Graph g(5); // ����һ������5�������ͼ  
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // �ӽڵ�0��ʼ���������������  
//    g.DFS(0);
//}

//void test6() // �ݹ鷽ʽʵ��ͼ���������
//{
//    Graph g(5); // ����һ������5�������ͼ  
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // ������δ���ʽڵ㿪ʼ��������������������߱�������δ���ʽڵ㣩  
//    g.DFSUtil();
//}

//void test7() // �ǵݹ鷽ʽʵ��ͼ�Ĺ������
//{
//    Graph g(5); // ����һ������5�������ͼ  
//
//    // ��ӱ�  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // �ӽڵ�0��ʼ���й����������  
//    g.BFS(0);
//}

void test8()
{
    Graph g(5); // ����һ������5�������ͼ  

// ��ӱ�  
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // �ӽڵ�0��ʼ���й����������  
    g.BFS(0);
}

int main() {

    test8();

    return 0;
}