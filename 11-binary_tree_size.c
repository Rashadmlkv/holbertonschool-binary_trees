#include "binary_trees.h"

/**
 * binary_tree_size - find sum of nodes
 * @tree: root
 * Return: sum
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsum = 0, rightsum = 0;

	if (tree)
	{
		leftsum += binary_tree_size(tree->left);
		rightsum += binary_tree_size(tree->right);
		return (leftsum + rightsum + 1);
	}
	return (0);
}
