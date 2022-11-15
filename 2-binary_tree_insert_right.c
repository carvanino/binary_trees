#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 *
 * Description: if the parent already has a right child,
 * the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: NULL on failure, or pointer to the created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	return (node);
}
