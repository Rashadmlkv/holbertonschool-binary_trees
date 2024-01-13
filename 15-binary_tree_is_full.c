#include "binary_trees.h"

/**
* binary_tree_is_full - checks binary tree is full
* @tree: root
* Return: 1 yes, 0 NO
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (2 * binary_tree_leaves(tree) - 1 == binary_tree_size(tree))
		return (1);
	return (0);
}
