#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/*--- Standard Libs ---*/
#include <stddef.h>

/*--- Structures and Types ---*/

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_trees_s *parent;
	struct binary_trees_s *left;
	struct binary_trees_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;


/*--- Helper Functions ---*/
void binary_tree_print(const binary_tree_t *);

#endif /* BINARY_TREE_H */
