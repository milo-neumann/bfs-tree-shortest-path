#ifndef FINAL_PROJECT_H
#define FINAL_PROJECT_H

// include libraries
#include <vector>
#include <iostream>
#include <queue>

// declare functions
struct Node {
    int vertex;   // current vertex
    Node* next;   // pointer, represents an edge
    Node(int v) : vertex(v), next(nullptr) {}
};

enum Color { WHITE, GRAY, BLACK };   // for BFS tracking

class Graph {
    private:
        int numVertices;   // size of graph
        std::vector<Node*> adjLists;   // vector of pointers to linked list heads
        std::vector<Color> colors;
        std::vector<int> parents;
    public:
        Graph(int numVertices);   // constructor
        ~Graph();   // destructor
        Graph(const Graph& other);   // copy constructor
        Graph& operator=(const Graph& other);   // copy assignment operator

        void addVertex();
        void addEdge(int u, int v);
        void BFS(int s); 
        void printGraph();   // prints adjacency lists
        void printBFSTree(int s);
        void printShortestPath(int s, int v);
};

#endif