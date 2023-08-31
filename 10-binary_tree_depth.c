#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a depth tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	size_t left_depth = binary_tree_depth(tree->parent);
		return (left_depth + 1);
}
