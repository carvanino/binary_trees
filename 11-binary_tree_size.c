#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - Measure the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the binary tree
 * Otherwise: if tree is NULL, 0
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
