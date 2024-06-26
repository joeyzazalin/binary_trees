#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: is a pointer to the node to check
 *
 *  Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right)
			return (1);
		return (0);
}
