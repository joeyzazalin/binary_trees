#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree
 * using post-order treversal
 *
 * @tree: A pointer to the root node of the tree to treverse
 * @func: A pointer to a function for each node
 * the value in the node is be passed as a parameter to this function
 *
 * if tree or func is NULL, nothing happens
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
