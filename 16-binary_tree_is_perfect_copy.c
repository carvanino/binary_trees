#include "binary_trees.h"
#include <stdio.h>


size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

	/*if (left_height == right_height)
	{
		return (1);
	}
	return (0);*/

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect
 * Otherwise: 0
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	
	height = binary_tree_height(tree);
	/*printf("%ld\n", height);*/
	if (tree->left == NULL && tree->right == NULL)
	{
		if (binary_tree_height(tree) == (height))
		{
			printf("HERE\n");
			return (1);
		}
		else
		{
			return (0);
		}
	}
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	
	return (0);
}
