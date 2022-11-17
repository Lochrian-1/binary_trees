#include "binary_trees.h"

/**
* binary_tree_preorder -  creates a binary tree node
* @tree: parent node
* @func: pointer to function
*
* Return: new node, or NULL
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
