#include "binary_trees.h"

/**
 * *binary_tree_insert_left - Inserts a node as the left child of another node.
 *
 * @parent: A pointer to the node to insert in the left-child.
 * @value: The value to store in the left node.
 * Return: A pointer to the created node
 *       or NULL on failure or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;

	return (new);
}
