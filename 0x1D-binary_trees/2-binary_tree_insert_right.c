#include "binary_trees.h"

/**
 * binary_tree_insert_right - this function inserts a node as the right-child
 * of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rode;

	if (parent == NULL)
		return (NULL);

	rode = malloc(sizeof(binary_tree_t));
	if (rode == NULL)
		return (NULL);

	rode->n = value;
	rode->parent = parent;
	rode->left = NULL;
	rode->right = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = rode;
		rode->right = parent->right;
	}
	parent->right = rode;

	return (rode);
}
