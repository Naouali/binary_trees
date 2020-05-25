#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert right node
 * @parent: parent node
 * @value: value to be addded to the node
 * Return: pointer to the newly added node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = binary_tree_node(parent, value);
	binary_tree_t *t;

	if (new == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		t = parent->right;
		t->parent = new;
		new->right = t;
		parent->right = new;
	}
	return (new);
}



