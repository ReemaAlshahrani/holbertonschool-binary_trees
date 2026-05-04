#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 1;
	right_h = tree->right ? 1 + tree_height(tree->right) : 1;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? (int)tree_height(tree->left) : 0;
	right_h = tree->right ? (int)tree_height(tree->right) : 0;

	return (left_h - right_h);
}
