#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node on the right
 * @parent: Pointer to the parent node
 * @value: The value
 * Return: returns the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
