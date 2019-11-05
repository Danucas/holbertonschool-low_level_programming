#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - print list
 *@h: the head of the list
 *Return: length
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t el = 0;

	while (c != NULL)
	{
		el++;
		printf("%d\n", c->n);
		if (c->next == NULL)
			return (el);
		c = c->next;
	}
	return (el);
}
