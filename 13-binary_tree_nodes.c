#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node.
 * Return: void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count_left = binary_tree_nodes(tree->left);
		count_right = binary_tree_nodes(tree->right);
		return (count_left + count_right + 1);
	}
	return (0);
}
