#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint - print list
 *@head: the head of the list
 *Return: length
 */
void free_listint(listint_t *head)
{
	listint_t *ne;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ne = head->next;
		free(head);
		head = ne;
	}
	free(head->next);
	free(head);

}
