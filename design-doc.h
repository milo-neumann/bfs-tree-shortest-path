// Shortest Path BFS-tree Final Project Design
// Milo Neumann
// Date: 12/2/25


/*
ABSTRACT
input: set of nodes, set of edges, a source node, a pair of nodes
output: the shortest path between the given pair of nodes
means: use the given sets to generate adjacencey lists, used to generate a graph, 
       then use a BFS algorithm to identify the shortest path
*/

/*
DATA STRUCTURES
Class Graph: to store adjacency lists for each vertex
Node struct (raw pointer): to from a singly linked list for each adjacency list
Vector of all vertices: to store the adjacency list heads, dynamic, allows indexing by vertex ID
Queue: for fifo access to graph, for BFS traversal
Vector of 'colors': to track progress of BFS - more explicit than a boolean
    WHITE → not discovered yet
    GRAY → discovered but not fully explored (currently in queue)
    BLACK → fully explored
*/


/*
FUNCTIONS
Graph: 
    Constructors / Destructor / Copy Constructor / Assignment Operator
            Manage dynamic memory (big‑3 requirement)
addVertex()
    // 
*/