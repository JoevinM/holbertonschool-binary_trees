#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node
 *         0 if tree is NULL or the node is the root
 *
 * Description: The depth is the number of edges from the node
 * to the root node. It is computed recursively by following
 * the parent pointers up to the root.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
