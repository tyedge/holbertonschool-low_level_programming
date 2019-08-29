#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts leaves in binary tree
 *@tree: pointre to root node
 * Return: returns number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lvsL = 0;
	size_t lvsR = 0;
	size_t nols = 0;

	if (tree == NULL)
		return (0);

	lvsL = binary_tree_leaves(tree->left);
	lvsR = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		nols++;

	nols += (lvsL + lvsR);
	return (nols);
}
