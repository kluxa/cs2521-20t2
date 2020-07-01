
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Set.h"

void doReachable(Graph g, Vertex v, Set s, int *visited);

Set reachable(Graph g, Vertex v) {
	Set s = SetNew();
	int *visited = calloc(GraphNumVertices(g), sizeof(int));
	doReachable(g, v, s, visited);
	free(visited);
	return s;
}

// DFS
void doReachable(Graph g, Vertex v, Set s, int *visited) {
	// visit v
	// add it to the reachable set
	// then see if there's a neighbour we can visit
}
