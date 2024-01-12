#include "binary_trees.h"

/**
 * binary_tree_is_root - check node is root
 * @node: node
 * Return: 1 is root, 0 is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	return (1);
}
