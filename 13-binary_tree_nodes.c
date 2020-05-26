#include "binary_trees.h"

/**
 * nodes - count nodes of a binary tree node.
 * @node: pointer to the node to count.
 * @number: number of nodes
 * Return: void
 */
void nodes(const binary_tree_t *node, size_t *number)
{
	if (node != NULL && (node->right != NULL || node->left != NULL))
	{
		*number += 1;
		nodes(node->right, number);
		nodes(node->left, number);
	}
}

/**
 * binary_tree_nodes - function to calculate nodes with at least 1 subtree
 * @tree: pointer to the root of tree.
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		i += 1;
		nodes(tree->left, &i);
		nodes(tree->right, &i);
	}
	return (i);
}
