#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node. If tree is NULL, return 0.
 *
 * Description: The depth is the number of edges from the node
 * to the root node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t compteur = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
	{
		binary_tree_depth(tree->right);
		compteur++;
	}
	if (tree->right == NULL)
	{
		binary_tree_depth(tree->left);
		compteur++;
	}
	return (compteur);

}
