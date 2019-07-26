#include "binary_trees.h"

int perfectionTest(const binary_tree_t *tree, int d, int level);

/**
 * binary_tree_is_perfect - this function is a wrapper function which calls a
 * function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = -1;
	int depth = 0;

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
	int res = 0;

	depth += binary_tree_depth(tree);

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (depth == level)
			res = 1;
		return (res);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);
	level += 1;
	return (perfectionTest(tree->left, depth, level + 1) &
		perfectionTest(tree->right, depth, level + 1));
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);

}
