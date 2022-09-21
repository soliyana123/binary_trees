#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - measures the height of a binary tree
 * @node: the node
 * Description: measures the height of a binary tree
 * Return: Nothing
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
