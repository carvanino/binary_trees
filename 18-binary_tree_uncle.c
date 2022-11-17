#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 * Otherwise: NULL; if node is NULL || node has no uncle
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->parent->right);
	}
	if (node == node->parent->right)
	{
		return (node->parent->parent->left);
	}
	return (NULL);
}

