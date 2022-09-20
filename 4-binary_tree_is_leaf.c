#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node
 *
 * Description: checks if a node is a leaf
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (!node->left && !node->right)
			return (1);
	return (0);
}
