#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 1 if binary tree is full
 * Otherwise: if tree is NULL 0
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (tree->left != NULL && tree->right != NULL)
	{
		/*return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));*/
		return (right && left);
	}
	return (0);

}
