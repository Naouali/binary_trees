#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - function tomesure BT height
 * @tree: binary tree to be mesured
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_height(tree->left);
		j = binary_tree_height(tree->right);
		if (j > i)
		{
			return (j + 1);
		}
		else
			return (i + 1);
	}
}

