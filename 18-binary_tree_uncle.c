#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;

	if (parent->parent->left == parent)
		return (parent->parent->right);

	return (parent->parent->left);
}
