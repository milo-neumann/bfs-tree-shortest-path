// Shortest Path BFS-tree Final Project Design
// Milo Neumann
// Date: 12/2/25


/*
PROJECT OVERVIEW
input: set of nodes, set of edges, a source node, a pair of nodes
output: the shortest path between the given pair of nodes
means: use the given sets to generate vertex adjacencey lists, used to generate a graph, 
       then use a BFS algorithm to identify the shortest path
*/

/*
DATA STRUCTURES
class Graph: to store adjacency lists for each vertex
struct Node* (raw pointer): points to vertices, represents edges, forms a singly linked list
Vector of all vertices: to store the adjacency list heads, dynamic, allows indexing by vertex ID
Queue: for fifo access to graph, for BFS traversal
Vector of 'colors', vector of parents: to track progress of BFS - more explicit than a boolean
    WHITE → not discovered yet
    GRAY → discovered but not fully explored (currently in queue)
    BLACK → fully explored
*/


/*
MAIN FUNCTIONS
addVertex()
    creates a new vertex
    appends to vector of vertices
addEdge(u, v)
    inserts edge to adjacency linked list
BFS(G, s)
    traverses graph G from source s (using breadth first search)
    initializes colors and parents
    // slide 7 pseudocode
printBFSTree(s)
    [FIXME] pseudocode
printShortestPath(s, v)
    [FIXME] pseudocode
*/