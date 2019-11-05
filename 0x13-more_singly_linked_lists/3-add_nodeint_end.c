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

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	if (*head == NULL)
	{
		c->next = *head;
		*head = c;
	}
	else
	{
		while (g != NULL)
		{
			if (g->next == NULL)
			{
				c->next = g->next;
				g->next = c;
				return (c);
			}
			else
				g = g->next;
		}
	}
	return (c);
}
