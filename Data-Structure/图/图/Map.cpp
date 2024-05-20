#include"Map.h"

//// ++++++++++++++++++++
//// 邻接表构建无向图
//// ++++++++++++++++++++
//// 边的结构体  
//struct Edge {
//    int dest; // 目标顶点  
//    Edge(int d) : dest(d) {}
//};
//
//// 顶点的类  
//class Vertex {
//public:
//    std::list<Edge> adjList; // 邻接表  
//
//    // 添加边到邻接表  
//    void addEdge(int dest) {
//        adjList.push_back(Edge(dest));
//    }
//};
//
//// 图的类  
//class Graph {
//private:
//    int numVertices; // 顶点的数量  
//    Vertex* vertices; // 顶点数组  
//
//public:
//    // 构造函数  
//    Graph(int vertices) : numVertices(vertices) {
//        this->vertices = new Vertex[numVertices];
//    }
//
//    // 析构函数  
//    ~Graph() {
//        delete[] vertices;
//    }
//
//    // 添加边到图中（无向图）  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            vertices[src].addEdge(dest); // 添加正向边  
//            vertices[dest].addEdge(src); // 添加反向边（因为是无向图）  
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // 打印图  
//    void printGraph() {
//        for (int i = 0; i < numVertices; ++i) {
//            std::cout << "Vertex " << i << ": ";
//            for (const auto& edge : vertices[i].adjList) {
//                std::cout << edge.dest << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//};


//// ++++++++++++++++++++
//// 邻接表构建有向图
//// ++++++++++++++++++++
//// 边的结构体（在有向图中，边只包含目标顶点）  
//struct Edge {
//    int dest; // 目标顶点  
//    Edge(int d) : dest(d) {}
//};
//
//// 顶点的类  
//class Vertex {
//public:
//    std::list<Edge> adjList; // 邻接表  
//
//    // 添加边到邻接表  
//    void addEdge(int dest) {
//        adjList.push_back(Edge(dest));
//    }
//};
//
//// 图的类  
//class Graph {
//private:
//    int numVertices; // 顶点的数量  
//    Vertex* vertices; // 顶点数组  
//
//public:
//    // 构造函数  
//    Graph(int vertices) : numVertices(vertices) {
//        this->vertices = new Vertex[numVertices];
//    }
//
//    // 析构函数  
//    ~Graph() {
//        delete[] vertices;
//    }
//
//    // 添加边到图中（有向图）  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            vertices[src].addEdge(dest); // 只添加正向边  
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // 打印图  
//    void printGraph() {
//        for (int i = 0; i < numVertices; ++i) {
//            std::cout << "Vertex " << i << ": ";
//            for (const auto& edge : vertices[i].adjList) {
//                std::cout << edge.dest << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//};


//// ++++++++++++++++++++
//// 邻接矩阵构建有向图
//// ++++++++++++++++++++
//#include <iostream>  
//#include <vector>  
//
//class Graph {
//private:
//    int numVertices; // 顶点的数量  
//    std::vector<std::vector<int>> adjMatrix; // 邻接矩阵  
//
//public:
//    // 构造函数  
//    Graph(int vertices) : numVertices(vertices) {
//        // 初始化邻接矩阵，所有元素都设置为0（表示无边）  
//        adjMatrix = std::vector<std::vector<int>>(vertices, std::vector<int>(vertices, 0));
//    }
//
//    // 添加边（无向图）  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            // 由于是无向图，所以两个方向都要设置  
//            adjMatrix[src][dest] = 1;
//            adjMatrix[dest][src] = 1;
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // 打印图  
//    void printGraph() {
//        for (int i = 0; i < numVertices; ++i) {
//            for (int j = 0; j < numVertices; ++j) {
//                std::cout << adjMatrix[i][j] << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//};


//// ++++++++++++++++++++
//// 邻接矩阵构建无向图
//// ++++++++++++++++++++
//#include <iostream>  
//#include <vector>  
//
//class Graph {
//private:
//    int numVertices; // 顶点的数量  
//    std::vector<std::vector<int>> adjMatrix; // 邻接矩阵  
//
//public:
//    // 构造函数  
//    Graph(int vertices) : numVertices(vertices) {
//        // 初始化邻接矩阵，所有元素都设置为0（表示无边）  
//        adjMatrix = std::vector<std::vector<int>>(vertices, std::vector<int>(vertices, 0));
//    }
//
//    // 添加边（有向图）  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            // 只设置从src到dest的边  
//            adjMatrix[src][dest] = 1;
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // 打印图  
//    void printGraph() {
//        for (int i = 0; i < numVertices; ++i) {
//            for (int j = 0; j < numVertices; ++j) {
//                std::cout << adjMatrix[i][j] << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//};


// ++++++++++++++++++++
// 非递归方式实现图的深度搜索
// ++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<bool>> adjMatrix; // 使用布尔值表示边是否存在  
//    std::vector<bool> visited; // 记录节点是否被访问过  
//
//public:
//    Graph(int vertices) : numVertices(vertices), adjMatrix(vertices, std::vector<bool>(vertices, false)), visited(vertices, false) {}
//
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            adjMatrix[src][dest] = true;
//        }
//    }
//
//    void DFS(int start) {
//        std::stack<int> s;
//        s.push(start);
//        visited[start] = true;
//
//        while (!s.empty()) {
//            int node = s.top();
//            s.pop();
//            std::cout << node << " ";
//
//            // 遍历当前节点的所有邻居  
//            for (int i = 0; i < numVertices; ++i) {
//                if (adjMatrix[node][i] && !visited[i]) {
//                    s.push(i); // 将未访问的邻居节点入栈  
//                    visited[i] = true; // 标记为已访问  
//                }
//            }
//        }
//    }
//};


//// ++++++++++++++++++++
//// 递归方式实现图的深度搜索
//// ++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<bool>> adjMatrix; // 使用布尔值表示边是否存在  
//    std::vector<bool> visited; // 记录节点是否被访问过  
//
//public:
//    Graph(int vertices) : numVertices(vertices), adjMatrix(vertices, std::vector<bool>(vertices, false)), visited(vertices, false) {}
//
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            adjMatrix[src][dest] = true;
//        }
//    }
//
//    void DFS(int start) {
//        visited[start] = true; // 标记当前节点为已访问  
//        std::cout << start << " "; // 访问并打印当前节点  
//
//        // 遍历当前节点的所有邻居  
//        for (int i = 0; i < numVertices; ++i) {
//            if (adjMatrix[start][i] && !visited[i]) {
//                DFS(i); // 对未访问的邻居节点递归调用DFS  
//            }
//        }
//    }
//
//    void DFSUtil() {
//        // 调用DFS函数遍历所有未访问的节点  
//        for (int i = 0; i < numVertices; ++i) {
//            if (!visited[i]) {
//                DFS(i);
//            }
//        }
//    }
//};


 ////++++++++++++++++++++
 ////非递归方式实现图的广度搜索
 ////++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<int>> adjList; // 邻接列表  
//    std::vector<bool> visited; // 记录节点是否被访问过  
//
//public:
//    Graph(int vertices) : numVertices(vertices), adjList(vertices), visited(vertices, false) {}
//
//    void addEdge(int src, int dest) {
//        adjList[src].push_back(dest); // 在源节点的邻接列表中添加目标节点  
//    }
//
//    void BFS(int start) {
//        std::queue<int> q;
//        visited[start] = true; // 标记起始节点为已访问  
//        q.push(start); // 将起始节点加入队列  
//
//        while (!q.empty()) {
//            int node = q.front(); // 取出队首节点  
//            q.pop();
//            std::cout << node << " "; // 访问并打印节点  
//
//            // 遍历当前节点的所有邻居  
//            for (int neighbor : adjList[node]) {
//                if (!visited[neighbor]) { // 如果邻居节点未被访问过  
//                    visited[neighbor] = true; // 标记邻居节点为已访问  
//                    q.push(neighbor); // 将邻居节点加入队列  
//                }
//            }
//        }
//    }
//};


// ++++++++++++++++++++
// 递归方式实现图的广度搜索
// ++++++++++++++++++++
#include <iostream>  
#include <vector>  
#include <stack>  

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjList; // 邻接列表  
    std::vector<bool> visited; // 记录节点是否被访问过  

public:
    Graph(int vertices) : numVertices(vertices), adjList(vertices), visited(vertices, false) {}

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
    }

    // 这是一个模拟的递归函数，但实际上并不是真正的递归BFS  
    void fakeRecursiveBFS(int start, std::stack<int>& s) {
        if (s.empty()) return; // 递归终止条件  

        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            std::cout << node << " ";

            // 将邻居节点加入栈中  
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }

            // 继续处理栈中的下一个节点  
            fakeRecursiveBFS(start, s);
        }
    }

    void BFS(int start) {
        std::stack<int> s;
        s.push(start); // 从起始节点开始  

        // 调用模拟的递归函数  
        fakeRecursiveBFS(start, s);
    }
};
