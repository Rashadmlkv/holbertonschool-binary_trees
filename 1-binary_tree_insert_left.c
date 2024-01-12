#include "binary_trees.h"

/**
 * binary_tree_insert_left - create & initilize value in left child
 * @parent: parent node
 * @value: data
 * Return: new node in success, Null in error
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int temp = 0;

	if (parent)
	{
		if (parent->left)
		{
			while (parent->left)
				parent = parent->left;
			temp = parent->n;
			parent->n = value;
			return (parent->left = binary_tree_node(parent, temp));
		}
		else
			return (parent->left = binary_tree_node(parent, value));
	}
	return (NULL);
}
