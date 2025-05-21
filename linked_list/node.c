#include "node.h"
#include <stdlib.h>

/**
 * @brief Allocate memory for a new Node
 *
 * Memory must be deleted manually
 *
 * @param int data Data to be allocated
 *
 * @return Node* Pointer to a Node
 * */
Node* node_constructor(int data) {
	Node *new_node = (Node *)malloc(sizeof(Node));

	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}

/**
 * @brief Deallocates the used memory for the node
 *
 * @param Node *node Pointer to the node to be deallocated
 * */
void node_destructor(Node *node) {
	free(node);
}

/**
 * @brief Gets the next node of the received node
 *
 * @param Node *node Pointer to a node
 *
 * @return Node* Pointer to a node
 * */
Node* get_next_node(Node *node) {
	return node->next;
}

/**
 * @brief Set the next node
 *
 * @param Node *curr Pointer to the current node
 * @param Node *next Pointer to the next node
 * */
void set_next_node(Node *curr, Node *next) {
	curr->next = next;
}
