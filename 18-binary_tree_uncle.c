#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Need parent and grandparent to have an uncle */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* If parent is left child of grandparent, return right child (uncle) */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* Otherwise parent is right child, return left child (uncle) */
	return (node->parent->parent->left);
}
