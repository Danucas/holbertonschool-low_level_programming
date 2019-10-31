#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - print list
 *@h: the head of the list
 *Return: length
 */
size_t list_len(const list_t *h)
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
