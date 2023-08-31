#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count_left = 1 + binary_tree_height(tree->left);
	count_right = 1 + binary_tree_height(tree->right);

	return (count_left > count_right ? count_left : count_right);
}
