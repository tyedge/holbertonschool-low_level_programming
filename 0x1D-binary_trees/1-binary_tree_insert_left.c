#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lode = NULL;

	if (parent == NULL)
		return (NULL);

	lode = malloc(sizeof(binary_tree_t));
	if (lode == NULL)
		return (NULL);

	lode->n = value;
	lode->parent = parent;
	lode->left = NULL;
	lode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = lode;
		lode->left = parent->left;
	}

	parent->left = lode;
	return (lode);

}
