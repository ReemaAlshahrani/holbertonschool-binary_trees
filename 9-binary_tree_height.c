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

	if (tree == NULL)
		return (0);

	/*
	 * If the left child exists, height is 1 + height of left subtree.
	 * Otherwise, left_h remains 0.
	 */
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	/*
	 * If the right child exists, height is 1 + height of right subtree.
	 * Otherwise, right_h remains 0.
	 */
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return the maximum of the two heights */
	return (left_h > right_h ? left_h : right_h);
}
