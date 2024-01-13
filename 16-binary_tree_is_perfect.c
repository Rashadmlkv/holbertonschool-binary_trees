#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: If a binary tree perfect return 1, otherwise 0.
 * If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t checker, height;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	checker = 2 << (height - 1);
	if (checker == binary_tree_leaves(tree) || height == 0)
		return (1);
	return (0);
}
