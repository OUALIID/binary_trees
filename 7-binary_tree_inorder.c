#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse a tree following the inorder traversal
 * @tree: Pointer to the node.
 * @func: Pointer to a function.
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
