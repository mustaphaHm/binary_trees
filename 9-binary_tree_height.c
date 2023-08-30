#include "binary_trees.h"
/**
 * binary_tree_height - func that measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lf_h = 0, r_h = 0;

	if (tree == NULL)
		return (0);
	lf_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);
	return (1 + (lf_h > r_h ? lf_h : r_h));
}
