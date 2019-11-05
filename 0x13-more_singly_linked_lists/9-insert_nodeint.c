#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - print list
 *@head: the head of the list
 *@idx: the head of the list
 *@n: the head of the list
 *Return: length
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c, *g = *head;
	unsigned int index = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (g != NULL)
	{
		if (index == idx)
		{
			c = malloc(sizeof(listint_t));
			if (c == NULL)
				return (NULL);
			c->n = n;
			c->next = g;
			return (c);
		}
	        if (g->next != NULL)
			g  = g->next;
		else
			break;
		index++;
	}
	index++;
	if (idx == index)
	return (NULL);
}
