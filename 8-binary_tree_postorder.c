#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node visited.
 *
 * Description:
 * This function visits each node of a binary tree using post-order traversal,
 * which processes nodes in the following order:
 *   1. Traverse the left subtree
 *   2. Traverse the right subtree
 *   3. Visit the current node
 *
 * At each visited node, the given function @func is called
 * with the node’s value.
 * If either @tree or @func is NULL, the function does nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
