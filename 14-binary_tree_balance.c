#include "binary_trees.h"

/**
 * height - Easures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, 0 if NULL
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((int) height(tree->left) - (int)height(tree->right));
}
