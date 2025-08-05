#include "binary_trees.h"

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
 * binary_tree_balance - Measures the balance factor of a binary tree node
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor or 0 if the tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	return ((int)left - (int)right);

}
