#include "binary_trees.h"

/**
 * binary_tree_leaves - finds leaves in bt
 * @tree: root
 * Return: sum of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleafe = 0, rightleafe = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		leftleafe = binary_tree_leaves(tree->left);
		rightleafe = binary_tree_leaves(tree->right);
		return (leftleafe + rightleafe);
	}
	return (0);
}
