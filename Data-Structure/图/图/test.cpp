#include"Map.h"
#include"Map.cpp"

//void test1() // 邻接表构建无向图
//{
//    // 创建一个包含5个顶点的图  
//    Graph g(5);
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // 打印图  
//    g.printGraph();
//}

//void test2() // 邻接表构建有向图
//{
//    // 创建一个包含5个顶点的有向图  
//    Graph g(5);
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0); // 注意这里是有向边，与无向图不同  
//    g.addEdge(2, 3);
//    g.addEdge(3, 3); // 可以有指向自身的边  
//
//    // 打印图  
//    g.printGraph();
//}

//void test3() // 邻接矩阵构建无向图
//{
//    // 创建一个包含5个顶点的无向图  
//    Graph g(5);
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // 打印图  
//    g.printGraph();
//}

//void test4() // 邻接矩阵构建无向图
//{
//    // 创建一个包含5个顶点的有向图  
//    Graph g(5);
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0); // 注意这里是有向边  
//    g.addEdge(2, 3);
//    // 注意没有添加从3到2或从4到0的边，因为是有向图  
//
//    // 打印图  
//    g.printGraph();
//}

//void test5() // 非递归方式实现图的深度搜索
//{
//    Graph g(5); // 创建一个包含5个顶点的图  
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // 从节点0开始进行深度优先搜索  
//    g.DFS(0);
//}

//void test6() // 递归方式实现图的深度搜索
//{
//    Graph g(5); // 创建一个包含5个顶点的图  
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // 从任意未访问节点开始进行深度优先搜索（或者遍历所有未访问节点）  
//    g.DFSUtil();
//}

//void test7() // 非递归方式实现图的广度搜索
//{
//    Graph g(5); // 创建一个包含5个顶点的图  
//
//    // 添加边  
//    g.addEdge(0, 1);
//    g.addEdge(0, 4);
//    g.addEdge(1, 2);
//    g.addEdge(1, 3);
//    g.addEdge(1, 4);
//    g.addEdge(2, 3);
//    g.addEdge(3, 4);
//
//    // 从节点0开始进行广度优先搜索  
//    g.BFS(0);
//}

void test8()
{
    Graph g(5); // 创建一个包含5个顶点的图  

// 添加边  
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // 从节点0开始进行广度优先搜索  
    g.BFS(0);
}

int main() {

    test8();

    return 0;
}