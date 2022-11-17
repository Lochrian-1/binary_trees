#include "binary_trees.h"

/**
* binary_tree_insert_right - creates a binary tree node
* @parent: parent node
* @value: value of new node
* Return: new node, or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;

	if (parent == NULL)
		return (NULL);

	nodo = binary_tree_node(parent, value);
	if (nodo == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = nodo;
	}
	else
	{
		nodo->right = parent->right;
		parent->right = nodo;
		nodo->right->parent = nodo;
	}

	return (nodo);
}
