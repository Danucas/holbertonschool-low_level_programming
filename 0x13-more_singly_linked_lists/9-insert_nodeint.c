#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *insert_nodeint_at_index - print list
 *@head: the head of the list
 *@idx: the head of the list
 *@n: the head of the list
 *Return: length
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c, *g = *head, *last;
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);
	last = g;
	while (g != NULL)
	{
		if (index == idx)
		{
			c = malloc(sizeof(listint_t));
			if (c == NULL)
				return (NULL);
			c->n = n;
			c->next = g;
			if (index == 0)
				*head = c;
			else
				last->next = c;
			return (c);
		}
		index++;
		last = g;
		if (g->next != NULL)
			g  = g->next;
		else
			break;
	}
/*	if (index == idx)
	{
		c = malloc(sizeof(listint_t));
		if (c == NULL)
			return (NULL);
		c->n = n;
		c->next = NULL;
		last->next = c;
		return (c);
		}*/
	return (NULL);
}
