#include "binary_trees.h"

/**
 * binary_tree_is_full - this function checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int testL = 0;
	int testR = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		testL = binary_tree_is_full(tree->left);
		testR = binary_tree_is_full(tree->right);
		return (testL & testR);
	}
	return (0);
}
