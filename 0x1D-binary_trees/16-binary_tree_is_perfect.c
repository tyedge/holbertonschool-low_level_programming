#include "binary_trees.h"

size_t tree_depth(const binary_tree_t *tree);
int perfectionTest(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - this function is a wrapper function which calls a
 * function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;
	int depth = tree_depth(tree);

	return (perfectionTest(tree, depth, level));
}

/**
 * perfectionTest - checks for perfection
 * @tree: pointer to the node
 * @depth: depth of the tree being measured
 * @level: the level currently being tested
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */

int perfectionTest(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == level)
			return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfectionTest(tree->left, depth, level + 1) &&
		perfectionTest(tree->right, depth, level + 1));

}

/**
 * tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree or NULL
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t DoR;
	size_t DoL;

	if (tree == NULL)
		return (0);

	DoR = tree_depth(tree->left);
	DoL = tree_depth(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (DoL > DoR)
		return (DoL + 1);
	else
		return (DoR + 1);
}
