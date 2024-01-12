#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node in right child
 * @parent: parent node
 * @value: data
 * Return: new node in success, Null in error
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int temp = 0;

	if (parent)
	{
		if (parent->right)
		{
			while (parent->right)
				parent = parent->right;
			temp = parent->n;
			parent->n = value;
			return (parent->right = binary_tree_node(parent, temp)); }
		else
			return (parent->right = binary_tree_node(parent, value));
	}
	return (NULL);
}
