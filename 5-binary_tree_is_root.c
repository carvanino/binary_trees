#include "binary_trees.h"

/**
 * binary_is_root - checks if a given node is root
 * 
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is root
 * Otherwise: 0; if node is NULL
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
	{
		return (1);
	}
	return(0);
}
