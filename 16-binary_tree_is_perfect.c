#include "binary_trees.h"
/**
 * binary_tree_balance - that measures the balance factor of a binary tree.
 * @tree: Pointer to the node.
 * Return: void
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node.
 * Return: void
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	int perfect_1, perfect_2;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_balance(tree) != 0)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);
	perfect_1 = binary_tree_is_perfect(tree->left);
	perfect_2 = binary_tree_is_perfect(tree->right);
	return (perfect_1 && perfect_2);
}
