#include "binary_trees.h"

/**
 * binary_tree_nodes - this function counts the nodes with at least 1 child in
 * a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes or 0, if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t noLs = 0;
	size_t noRs = 0;
	size_t nons = 0;

	if (tree == NULL)
		return (0);
	noLs = binary_tree_nodes(tree->left);
	noRs = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		nons++;

	nons += (noLs + noRs);
	return (nons);
}
