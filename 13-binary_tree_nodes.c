#include "binary_trees.h"

/**
 * binary_tree_nodes - finds count of nodes in bt
 * @tree: root
 * Return: sum of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftnode = 0, rightnode = 0;

		if (!tree->left && !tree->right)
			return (0);
		leftnode = binary_tree_nodes(tree->left);
		rightnode = binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			return (leftnode + rightnode + 1);
		else
			return (leftnode + rightnode);
	}
	return (0);
}
