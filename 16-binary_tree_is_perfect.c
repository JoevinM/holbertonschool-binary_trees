#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (1 + left);

	else
		return (1 + right);

}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * A perfect binary tree is a tree where all internal nodes have two children
 * and all leaves are at the same level.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right && tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_perfect(tree->left) &&
		(binary_tree_is_perfect(tree->right)));

	else if (tree->right == NULL && tree->left == NULL)
		return (1);
	else
		return (0);
}
