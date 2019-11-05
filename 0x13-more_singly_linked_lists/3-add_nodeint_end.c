#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - print list
 *@head: the head of the list
 *@n: the head of the list
 *Return: length
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c, *g = *head;
	static listint_t *f;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	if (f == NULL)
		f = c;
	c->n = n;
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
