#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - print list
 *@h: the head of the list
 *Return: length
 */
size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t el = 0;

	while (c != NULL)
	{
		el++;
		if (c->str != NULL)
			printf("[%d] %s\n", c->len, c->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		if (c->next == NULL)
			return (el);
		c = c->next;
	}
	return (el);
}
