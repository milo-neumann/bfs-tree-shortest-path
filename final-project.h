#ifndef FINAL_PROJECT_H
#define FINAL_PROJECT_H

// include libraries
#include <vector>
#include <iostream>

// declare functions
class Graph {
    private:
        int numVertices;   // size of graph
        std::vector<Node*> adjList;   // vector of pointers to linked list heads
    public:
        Graph(int numVertices);   // graph constructor
        void addEdge(int u, int v);   // adds edge u → v
        void BFS(int s);   // breadth-first search from source s
        void printGraph();   // prints adjacency lists
};

struct Node {
    int vertex;
    Node* next;
    Node(int v) : vertex(v), next(nullptr) {}
};

#endif