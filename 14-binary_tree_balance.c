#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * binary factor is the difference between the Height of the left
 * sub tree and the height of the right sub tree
 *
 * @tree: Pointer to the root node of the tree to measure the balsnce factor
 *
 * Return: The Binary factor
 * Otherwise: return 0; if tree is NULL
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = 1 + binary_tree_balance(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_balance(tree->right);
	}

	return (left_height - right_height);
}
