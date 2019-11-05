#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_list - print list
 *@head: the head of the list
 *Return: length
 */
void free_list(list_t *head)
{
	list_t *ne;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ne = head->next;
		free(head->str);
		free(head);
		head = ne;
	}
	free(head->next);
	free(head->str);
	free(head);

}
