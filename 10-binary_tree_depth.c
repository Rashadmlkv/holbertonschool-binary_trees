#include "binary_trees.h"

/**
 * binary_tree_depth - find depth till x node
 * @tree: node
 * Return: Depth, 0 if node is root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	(void)depth;
	if (tree)
	{
		depth = binary_tree_depth(tree->parent);
		if (tree->parent)
			return (++depth);
	}
	return (0);
}
