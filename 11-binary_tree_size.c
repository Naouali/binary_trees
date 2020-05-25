#include "binary_trees.h"

/**
 * run - function to travers the whole tree
 * @node: pointer to the node
 * @i: number of nodes
 * Return: void
 */

void run(const binary_tree_t *node, size_t *i)
{
	if (node != NULL)
	{
		*i += 1;
		run(node->right, i);
		run(node->left, i);
	}
}

/**
 * binary_tree_size - function to mesure size of tree
 * @tree: pointer to the node
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;


	if (tree == NULL)
		return (0);

	if (tree)
	{
		i += 1;
		run(tree->left, &i);
		run(tree->right, &i);
	}
		return (i);
	}
