#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - print list
 *@head: the head of the list
 *@str: the head of the list
 *Return: length
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c, *g = *head;
	static list_t *f;
	unsigned int l = 0;
	char *dup;

	c = malloc(sizeof(list_t));
	if (c == NULL)
		return (NULL);
	if (f == NULL)
		f = c;
	dup = strdup(str);
	if (dup != NULL)
	{
		while (dup[l] != '\0')
			l++;
	}
	c->str = dup;
	c->len = l;
	while (1)
	{
		if (g != NULL)
		{
			if (g->next == NULL)
			{
				c->next = g->next;
				g->next = c;
				*head = f;
				return (c);
			}
			else
				g = g->next;
		}
		else
		{
			*head = f;
			break;
		}
	}
	return (c);
}
