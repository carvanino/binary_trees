#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node
 * Otherwise: NULL; if node || parent is NULL && if node has no sibling
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	return (node->parent->right);

}
