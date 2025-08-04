#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf (no children),
 *         0 if the node is not a leaf or is NULL.
 *
 * Description:
 * A leaf node is a node with no left or right child.
 * This function returns 1 if the given node is a leaf,
 * otherwise it returns 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}
