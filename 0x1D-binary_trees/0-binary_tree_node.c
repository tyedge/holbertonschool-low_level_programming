#include "binary_trees.h"

/**
 * binary_tree_node - this function creates binary tree node
 * @parent: pointer to parent node of the node being created
 * @value: the value to put in the new node
 *
 * Return: returns a pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newd;

	newd = malloc(sizeof(binary_tree_t));
	if (newd == NULL)
		return (NULL);

	newd->n = value;
	newd->parent = parent;
	newd->left = NULL;
	newd->right = NULL;

	return (newd);
}
