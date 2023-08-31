#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_leaves = binary_tree_leaves(tree->left);
		return (left_leaves + 1);
}
