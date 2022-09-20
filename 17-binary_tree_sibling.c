#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Binary tree
 * Description: checks if a binary tree is perfect
 * Return: 1 or 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if ((node == parent->left) && (parent->right != NULL))
		sibling = parent->right;
	else if ((node == parent->right) && (parent->left != NULL))
		sibling = parent->left;
	return (sibling);
}
