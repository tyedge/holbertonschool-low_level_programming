#include "binary_trees.h"

/**
 * binary_tree_balance - this function measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 *
 * Return: balance factor or 0, if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hoL = 0;
	int hoR = 0;
	int bal = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		bal = 0;
	if (tree->left == NULL)
		hoL = -1;
	if (tree->right == NULL)
		hoR = -1;
	hoL += binary_tree_height(tree->left);
	hoR += binary_tree_height(tree->right);
	bal = (hoL - hoR);
	return (bal);
}



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
