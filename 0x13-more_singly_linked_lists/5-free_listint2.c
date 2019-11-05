#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint2 - print list
 *@head: the head of the list
 *Return: length
 */
void free_listint2(listint_t **head)
{
	listint_t *ne = *head, *tmp;

	if (ne == NULL)
		return;
	while (ne->next != NULL)
	{
		tmp = ne->next;
		free(ne);
		ne = tmp;
	}
	free(ne);
	head = NULL;
}
