#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function to create a binary tree node
 *@parent: the parent node
 *@value: int data to insert in the node
 *Return: pointer to the newly added node or null in failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	return (NULL);
	if (parent == NULL)
	parent = new;
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
