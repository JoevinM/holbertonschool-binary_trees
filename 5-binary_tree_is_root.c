#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root (has no parent),
 *         0 if the node is not a root or is NULL.
 *
 * Description:
 * A root node is a node with no parent.
 * This function returns 1 if the given node is the root
 * of a binary tree, otherwise it returns 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	else
		return (0);
}
