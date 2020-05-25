#include "binary_trees.h"

/**
 * run - function to travers the whole tree
 * @node: pointer to the node
 * @i: number of nodes
 * Return: void
 */

void run(const binary_tree_t *node, size_t *i)
{
	if (node->left == NULL && node->right == NULL)
	{
		*i += 1;
	}
	if (node->left != NULL)
		run(node->left, i);
	if (node->right != NULL)
		run(node->right, i);
}

/**
 * binary_tree_leaves - function to mesure size of tree
 * @tree: pointer to the node
 * Return: size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	run(tree, &c);
	return (c);

	}
