#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - print list
 *@h: the head of the list
 *Return: length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
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
