#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
	const list_t *this_node = h;
	unsigned int ret = 0;


	while (this_node != NULL)
	{
		if (this_node->str == '\0')
			printf("[0] %p\n", this_node->str);
		else
			printf("[%d] %s\n", this_node->len, this_node->str);
		ret++;
		this_node = this_node->next;
	}
	return (ret);
}
