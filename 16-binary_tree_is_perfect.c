#include "binary_trees.h"

/**
 * get_depth - Measures the depth of the leftmost leaf
 * @tree: Pointer to the node to measure
 *
 * Return: The depth of the leaf
 */
int get_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect_recursive - Recursively checks if tree is perfect
 * @tree: Pointer to the current node
 * @d: The target depth
 * @level: The current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	/* If it is a leaf, check if its depth matches the target depth */
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	/* If one child is missing, it's not a perfect tree */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recurse on both children */
	return (is_perfect_recursive(tree->left, d, level + 1) &&
		is_perfect_recursive(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = get_depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
