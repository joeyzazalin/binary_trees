#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: A pointer to the node of the tree to measure the size of
 *
 * Return: the size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (true)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
