#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure
 * Description: measures the balance factor of a binary tree
 * Return: positive, negative or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_L = 0, h_R = 0, bal = 0;

	if (!tree)
		return (0);
	h_L = binary_tree_height(tree->left);
	h_R = binary_tree_height(tree->right);

	bal = h_L - h_R;
	bal += (tree->left ? 0 : -1);
	bal -= (tree->right ? 0 : -1);

	return (bal);
}
