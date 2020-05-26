#include "binary_trees.h"

/**
 * binary_tree_inorder - function to in order travers a tree
 * @tree: pointer to root
 * @func: pointer to function
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
