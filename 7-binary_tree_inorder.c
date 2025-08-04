#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node visited.
 *
 * Description:
 * This function visits each node of a binary tree using in-order traversal,
 * which processes nodes in the following order:
 *   1. Traverse the left subtree
 *   2. Visit the current node
 *   3. Traverse the right subtree
 *
 * At each visited node, the given function @func is called
 * with the node’s value.
 * If either @tree or @func is NULL, the function does nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
