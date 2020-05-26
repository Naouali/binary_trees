#include "binary_trees.h"


/**
 * binary_tree_preorder - function to travers tree pre-order
 * @tree: pointer to root
 * @func: pointer to function
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);

	}
}
