#include "binary_trees.h"

int getDepth(const binary_tree_t *tree);

/**
 * binary_tree_height - this function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t DoR;
	size_t DoL;

	if (tree == NULL)
		return (0);

	DoR = binary_tree_height(tree->left);
	DoL = binary_tree_height(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (DoL > DoR)
		return (DoL + 1);
	else
		return (DoR + 1);
}
