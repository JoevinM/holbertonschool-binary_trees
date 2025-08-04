#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the newly created node,
 *         or NULL if memory allocation fails.
 *
 * Description:
 * This function allocates memory for a new node in a binary tree.
 * The node is initialized with the given value, the specified parent,
 * and its left and right children are set to NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}