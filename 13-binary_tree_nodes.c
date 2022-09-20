#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that  counts the nodes
 * @tree: Binary tree
 *
 * Description: Function that that  counts the nodes
 * with at least 1 child in a binary tree
 * Return: Nothing void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	return (1 + (binary_tree_nodes(tree->left)) +
		(binary_tree_nodes(tree->right)));
}
