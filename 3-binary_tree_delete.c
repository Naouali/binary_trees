#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - delete whole binary tree
 * @tree: pointer to the root of the tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
