#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * print_level - given level of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 * @level: level in the tree to goes through
 */
void print_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!tree)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - measures the depth of a node in a binary tree
 * @tree: Binary tree
 * @func: int function
 * Description: measures the depth of a node in a binary tree
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0, level;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	for (level = 0; level <= height; level++)
		print_level(tree, func, level);
}
