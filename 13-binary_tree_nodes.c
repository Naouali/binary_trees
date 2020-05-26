#include "binary_trees.h"

/**
 * binary_tree_nodes - function to calculta nodes with at least 1 subtree
 * @tree: pointer to root of the tree
 * Return: number of nodes with at least one subtree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
