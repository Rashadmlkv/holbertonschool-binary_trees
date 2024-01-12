#include "binary_trees.h"

/**
 * binary_tree_delete - delete all nodes in bt
 * @tree: root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp = tree;

	if (tree)
	{
		for (; temp->left; temp = temp->left)
			;
		for (; temp; temp = temp->parent)
		{
			if (temp->left)
				free(temp->left);
			if (temp->right && temp != tree)
				free(temp->right); }
		temp = tree;
		for (; temp->right; temp = temp->right)
			;
		for (; temp; temp = temp->parent)
		{
			if (temp->left && temp != tree)
				free(temp->left);
			if (temp->right)
				free(temp->right); }
		free(tree);
	}
}
