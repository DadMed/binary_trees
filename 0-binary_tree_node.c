#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree.
 *
 * @parent: A pointer to the parent node.
 * @value: The value to be assigned to the new node.
 *
 * Return: If successful, a pointer to the newly created node; otherwise, NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
