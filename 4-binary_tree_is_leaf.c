#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks nodes is leaf | not
 * @node: node
 * Return: 1 is leaf , 0 is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || (node->left != NULL || node->right != NULL))
		return (0);
	return (1);
}
