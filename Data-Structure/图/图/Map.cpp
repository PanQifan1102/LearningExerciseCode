#include"Map.h"

//// ++++++++++++++++++++
//// �ڽӱ�������ͼ
//// ++++++++++++++++++++
//// �ߵĽṹ��  
//struct Edge {
//    int dest; // Ŀ�궥��  
//    Edge(int d) : dest(d) {}
//};
//
//// �������  
//class Vertex {
//public:
//    std::list<Edge> adjList; // �ڽӱ�  
//
//    // ��ӱߵ��ڽӱ�  
//    void addEdge(int dest) {
//        adjList.push_back(Edge(dest));
//    }
//};
//
//// ͼ����  
//class Graph {
//private:
//    int numVertices; // ���������  
//    Vertex* vertices; // ��������  
//
//public:
//    // ���캯��  
//    Graph(int vertices) : numVertices(vertices) {
//        this->vertices = new Vertex[numVertices];
//    }
//
//    // ��������  
//    ~Graph() {
//        delete[] vertices;
//    }
//
//    // ��ӱߵ�ͼ�У�����ͼ��  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            vertices[src].addEdge(dest); // ��������  
//            vertices[dest].addEdge(src); // ��ӷ���ߣ���Ϊ������ͼ��  
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // ��ӡͼ  
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
//// �ڽӱ�������ͼ
//// ++++++++++++++++++++
//// �ߵĽṹ�壨������ͼ�У���ֻ����Ŀ�궥�㣩  
//struct Edge {
//    int dest; // Ŀ�궥��  
//    Edge(int d) : dest(d) {}
//};
//
//// �������  
//class Vertex {
//public:
//    std::list<Edge> adjList; // �ڽӱ�  
//
//    // ��ӱߵ��ڽӱ�  
//    void addEdge(int dest) {
//        adjList.push_back(Edge(dest));
//    }
//};
//
//// ͼ����  
//class Graph {
//private:
//    int numVertices; // ���������  
//    Vertex* vertices; // ��������  
//
//public:
//    // ���캯��  
//    Graph(int vertices) : numVertices(vertices) {
//        this->vertices = new Vertex[numVertices];
//    }
//
//    // ��������  
//    ~Graph() {
//        delete[] vertices;
//    }
//
//    // ��ӱߵ�ͼ�У�����ͼ��  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            vertices[src].addEdge(dest); // ֻ��������  
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // ��ӡͼ  
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
//// �ڽӾ��󹹽�����ͼ
//// ++++++++++++++++++++
//#include <iostream>  
//#include <vector>  
//
//class Graph {
//private:
//    int numVertices; // ���������  
//    std::vector<std::vector<int>> adjMatrix; // �ڽӾ���  
//
//public:
//    // ���캯��  
//    Graph(int vertices) : numVertices(vertices) {
//        // ��ʼ���ڽӾ�������Ԫ�ض�����Ϊ0����ʾ�ޱߣ�  
//        adjMatrix = std::vector<std::vector<int>>(vertices, std::vector<int>(vertices, 0));
//    }
//
//    // ��ӱߣ�����ͼ��  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            // ����������ͼ��������������Ҫ����  
//            adjMatrix[src][dest] = 1;
//            adjMatrix[dest][src] = 1;
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // ��ӡͼ  
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
//// �ڽӾ��󹹽�����ͼ
//// ++++++++++++++++++++
//#include <iostream>  
//#include <vector>  
//
//class Graph {
//private:
//    int numVertices; // ���������  
//    std::vector<std::vector<int>> adjMatrix; // �ڽӾ���  
//
//public:
//    // ���캯��  
//    Graph(int vertices) : numVertices(vertices) {
//        // ��ʼ���ڽӾ�������Ԫ�ض�����Ϊ0����ʾ�ޱߣ�  
//        adjMatrix = std::vector<std::vector<int>>(vertices, std::vector<int>(vertices, 0));
//    }
//
//    // ��ӱߣ�����ͼ��  
//    void addEdge(int src, int dest) {
//        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
//            // ֻ���ô�src��dest�ı�  
//            adjMatrix[src][dest] = 1;
//        }
//        else {
//            std::cerr << "Invalid vertex index!" << std::endl;
//        }
//    }
//
//    // ��ӡͼ  
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
// �ǵݹ鷽ʽʵ��ͼ���������
// ++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<bool>> adjMatrix; // ʹ�ò���ֵ��ʾ���Ƿ����  
//    std::vector<bool> visited; // ��¼�ڵ��Ƿ񱻷��ʹ�  
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
//            // ������ǰ�ڵ�������ھ�  
//            for (int i = 0; i < numVertices; ++i) {
//                if (adjMatrix[node][i] && !visited[i]) {
//                    s.push(i); // ��δ���ʵ��ھӽڵ���ջ  
//                    visited[i] = true; // ���Ϊ�ѷ���  
//                }
//            }
//        }
//    }
//};


//// ++++++++++++++++++++
//// �ݹ鷽ʽʵ��ͼ���������
//// ++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<bool>> adjMatrix; // ʹ�ò���ֵ��ʾ���Ƿ����  
//    std::vector<bool> visited; // ��¼�ڵ��Ƿ񱻷��ʹ�  
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
//        visited[start] = true; // ��ǵ�ǰ�ڵ�Ϊ�ѷ���  
//        std::cout << start << " "; // ���ʲ���ӡ��ǰ�ڵ�  
//
//        // ������ǰ�ڵ�������ھ�  
//        for (int i = 0; i < numVertices; ++i) {
//            if (adjMatrix[start][i] && !visited[i]) {
//                DFS(i); // ��δ���ʵ��ھӽڵ�ݹ����DFS  
//            }
//        }
//    }
//
//    void DFSUtil() {
//        // ����DFS������������δ���ʵĽڵ�  
//        for (int i = 0; i < numVertices; ++i) {
//            if (!visited[i]) {
//                DFS(i);
//            }
//        }
//    }
//};


 ////++++++++++++++++++++
 ////�ǵݹ鷽ʽʵ��ͼ�Ĺ������
 ////++++++++++++++++++++
//class Graph {
//private:
//    int numVertices;
//    std::vector<std::vector<int>> adjList; // �ڽ��б�  
//    std::vector<bool> visited; // ��¼�ڵ��Ƿ񱻷��ʹ�  
//
//public:
//    Graph(int vertices) : numVertices(vertices), adjList(vertices), visited(vertices, false) {}
//
//    void addEdge(int src, int dest) {
//        adjList[src].push_back(dest); // ��Դ�ڵ���ڽ��б������Ŀ��ڵ�  
//    }
//
//    void BFS(int start) {
//        std::queue<int> q;
//        visited[start] = true; // �����ʼ�ڵ�Ϊ�ѷ���  
//        q.push(start); // ����ʼ�ڵ�������  
//
//        while (!q.empty()) {
//            int node = q.front(); // ȡ�����׽ڵ�  
//            q.pop();
//            std::cout << node << " "; // ���ʲ���ӡ�ڵ�  
//
//            // ������ǰ�ڵ�������ھ�  
//            for (int neighbor : adjList[node]) {
//                if (!visited[neighbor]) { // ����ھӽڵ�δ�����ʹ�  
//                    visited[neighbor] = true; // ����ھӽڵ�Ϊ�ѷ���  
//                    q.push(neighbor); // ���ھӽڵ�������  
//                }
//            }
//        }
//    }
//};


// ++++++++++++++++++++
// �ݹ鷽ʽʵ��ͼ�Ĺ������
// ++++++++++++++++++++
#include <iostream>  
#include <vector>  
#include <stack>  

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjList; // �ڽ��б�  
    std::vector<bool> visited; // ��¼�ڵ��Ƿ񱻷��ʹ�  

public:
    Graph(int vertices) : numVertices(vertices), adjList(vertices), visited(vertices, false) {}

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
    }

    // ����һ��ģ��ĵݹ麯������ʵ���ϲ����������ĵݹ�BFS  
    void fakeRecursiveBFS(int start, std::stack<int>& s) {
        if (s.empty()) return; // �ݹ���ֹ����  

        int node = s.top();
        s.pop();

        if (!visited[node]) {
            visited[node] = true;
            std::cout << node << " ";

            // ���ھӽڵ����ջ��  
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }

            // ��������ջ�е���һ���ڵ�  
            fakeRecursiveBFS(start, s);
        }
    }

    void BFS(int start) {
        std::stack<int> s;
        s.push(start); // ����ʼ�ڵ㿪ʼ  

        // ����ģ��ĵݹ麯��  
        fakeRecursiveBFS(start, s);
    }
};
