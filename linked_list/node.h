#ifndef NODE_H
#define NODE_H

typedef struct Node {
	int data;
	struct Node *next;
} Node;

// Node constructor
Node* node_constructor(int data);

// Node destructor
void node_destructor(Node *node);

Node* get_next_node(Node *node);
void set_next_node(Node *curr, Node *next);

#endif // NODE_H
