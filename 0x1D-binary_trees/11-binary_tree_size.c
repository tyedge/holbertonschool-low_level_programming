#include "binary_trees.h"
/**
 * binary_tree_size - this function measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of tree or 0, is tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t soL = 0;
	size_t soR = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	soL = binary_tree_size(tree->left);
	soR = binary_tree_size(tree->right);
	size = (soL + soR + 1);

	return (size);
}
