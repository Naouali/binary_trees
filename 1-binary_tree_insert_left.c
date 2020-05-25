#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert left node
 * @parent: parent node
 * @value: value to be addded to the node
 * Return: pointer to the newly added node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = malloc(sizeof(binary_tree_t));
	binary_tree_t *t;

	if (new_left == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_left;
	}
	else
	{
		t = parent->left;
		t->parent = new_left;
		new_left->left = t;
		parent->left = new_left;
	}
	return (new_left);
}



