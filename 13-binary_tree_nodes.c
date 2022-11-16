#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the node with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of node
 *
 * Return: The number of nodes with at least 1 child
 * Otherwise: if tree is NULL; return 0
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
