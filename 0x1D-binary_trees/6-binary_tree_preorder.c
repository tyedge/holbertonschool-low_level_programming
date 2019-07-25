#include "binary_trees.h"

/**
 * binary_tree_preorder - this function goes through a binary tree using
 * pre-order traversal
 * @tree: pointer of the root node of the tree to traverse
 * @func: pointer to function to call each node
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
