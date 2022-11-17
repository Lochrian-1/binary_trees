#include "binary_trees.h"

/**
* binary_tree_is_leaf - creates a binary tree node
* @node: parent node
*
* Return: new node, or NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
