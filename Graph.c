#include <stdio.h>

typedef struct node node;

/* Remove any unnecessary fields */
struct node{
	char id;
	int weight;
	int degree;
	node next;
};

int ** buildAdjMatrix(int numNodes){
	int adjMatrix[numNodes][numNodes];
	return adjMatrix;
}

node * buildAdjList(int numNodes){
	node adjList[numNodes];
	return adjList;
}

/* adjList must be leaf node or branches will be lost */
void addAdjLink(node *adjList){
	node * newLink;

	newLink = malloc(sizeof(node));
	adjList->next = newLink;
}