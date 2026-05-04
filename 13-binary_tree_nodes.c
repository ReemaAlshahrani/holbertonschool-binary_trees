#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	/* If the node has at least one child, it counts as 1 */
	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;

	/* Add the result of current node to the recursive count of children */
	return (nodes + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
