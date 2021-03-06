#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * tree_height - function tomesure BT height
 * @node: binary tree to be mesured
 * Return: max_height
 */

size_t tree_height(const binary_tree_t *node)
{
	size_t i = 0;
	size_t j = 0;

	if (node->left)
	{
		i = tree_height(node->left);
	}
	if (node->right)
	{
		j = tree_height(node->right);
	}
	if (i > j)
		return (i + 1);
	return (j + 1);

}

/**
 * binary_tree_height - function tomesure BT height
 * @tree: binary tree to be mesured
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t k = 0;

	if (tree == NULL)
		return (0);
	k = tree_height(tree);
	k--;
	return (k);
}

/**
 * binary_tree_balance - function to calculate balance of tree
 * @tree: pointer to root
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
