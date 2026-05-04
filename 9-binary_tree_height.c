#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	/* If the node is NULL, return 0 as per requirements */
	if (tree == NULL)
		return (0);

	/* * Calculate height of the left subtree:
	 * If left child exists, height is 1 + height of the child.
	 */
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	/* * Calculate height of the right subtree:
	 * If right child exists, height is 1 + height of the child.
	 */
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the maximum of the two heights */
	return (left_h > right_h ? left_h : right_h);
}
