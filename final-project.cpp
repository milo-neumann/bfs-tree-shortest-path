#include "final-project.h"

// constructor
Graph::Graph(int numVertices) {
    this->numVertices = numVertices;
    adjLists.resize(numVertices, nullptr);   // sets all pointers to null
    colors.resize(numVertices, WHITE);   
    parents.resize(numVertices, -1);
}

// destructor
Graph::~Graph() {
    for (Node* head : adjLists) {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
}

// whats the third ??


// create a new vertex
void Graph::addVertex() {
    numVertices++;
    adjLists.push_back(nullptr);   // no edges initially
    colors.push_back(WHITE);   // unsearched
    parents.push_back(-1);
}

// create an undirected edge
void Graph::addEdge(int u, int v) {
    Node* newNode = new Node(v);
    newNode->next = adjLists[u];   // link u to v
    adjLists[u] = newNode;

    Node* newNode2 = new Node(u);
    newNode2->next = adjLists[v];   // link v to u
    adjLists[v] = newNode2;
}

// Breadth First Search
void Graph::BFS(int s) {
    // resize and initialize tracking vectors
    colors.resize(numVertices, WHITE);
    parents.resize(numVertices, -1);
    distances.assign(numVertices, -1);

    // initialize source vertex
    colors[s] = GRAY;   // status = queued
    parents[s] = -1;   
    distances[s] = 0;

    std::queue<int> Q;
    Q.push(s);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        Node* temp = adjLists[u];
        while (temp) {   // search neighbors of u
            int v = temp->vertex;
            if (colors[v] == WHITE) {   // if first time seeing v
                colors[v] = GRAY;
                distances[v] = distances[u] + 1;
                parents[v] = u;
                Q.push(v);
            }
            temp = temp->next;
        }
        colors[u] = BLACK;   // u is fully searched
    }
}
