#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
 * binary_tree_ancestor - measures the depth of a node in a binary tree
 * @first: pointer first node
 * @second: Pointer to a second node
 * Description: measures the depth of a node in a binary tree
 * Return: Nothing
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t f_depth = 0, s_depth = 0;

	if (!first || !second)
		return (NULL);

	f_depth = binary_tree_depth(first);
	s_depth = binary_tree_depth(second);

	while (f_depth > s_depth)
		first = first->parent, f_depth -= 1;
	while (f_depth < s_depth)
		second = second->parent, s_depth -= 1;

	while (first)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}
