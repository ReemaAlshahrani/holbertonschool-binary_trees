#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node or parent is NULL, no sibling exists */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Otherwise, node is the right child, so return the left child */
	return (node->parent->left);
}
