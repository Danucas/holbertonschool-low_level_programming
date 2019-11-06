#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *delete_nodeint_at_index - print list
 *@head: the head of the list
 *@index: the head of the list
 *Return: length
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *g = *head, *last, *del;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	last = g;
	while (g != NULL)
	{
		if (index == i)
		{
			del = g;
			if (index == 0)
			{
				*head = g->next;
			}
			else
			{
				last->next = g->next;
			}
			free(del);
			return (1);
		}
		i++;
		last = g;
		if (g->next != NULL)
			g  = g->next;
		else
			break;
	}
	return (-1);
}
