#include "binary_trees.h"

/**
 * binary_tree_node - This function create a node of the a binary tree.
 *
 * Return: Always a pointer to the node created.
 * @value: Is a integer to store in the node.
 * @parent: Is the pather of the node to be created.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
