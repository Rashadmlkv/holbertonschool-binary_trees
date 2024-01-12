#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree
 * @tree: root
 * @func: print functions
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n); }
}
