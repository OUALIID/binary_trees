#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: void
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	else if (second == first->parent)
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	else if (second->parent->parent != NULL &&
			 first->parent == second->parent->parent)
		return ((binary_tree_t *)first->parent);

	else if (first->parent->parent != NULL &&
			 second->parent == first->parent->parent)
		return ((binary_tree_t *)second->parent);
	return (NULL);
}
