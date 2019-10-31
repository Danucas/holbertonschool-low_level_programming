#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_node - print list
 *@head: the head of the list
 *@str: string to add
 *Return: length
 */
list_t *add_node(list_t **head, const char *str)
{
	const list_t *c = h;
	size_t el = 0;

	while (c != NULL)
	{
		el++;
		if (c->next == NULL)
			return (el);
		c = c->next;
	}
	return (el);
}
