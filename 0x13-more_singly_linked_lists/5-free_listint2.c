#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint2 - print list
 *@head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}
}
