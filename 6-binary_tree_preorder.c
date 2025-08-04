#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node visited.
 *
 * Description:
 * This function visits each node of a binary tree using pre-order traversal,
 * which processes nodes in the following order:
 *   1. Visit the current node
 *   2. Traverse the left subtree
 *   3. Traverse the right subtree
 *
 * At each node, the given function @func is called with the node’s value.
 * If either @tree or @func is NULL, the function does nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
