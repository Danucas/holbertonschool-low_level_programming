#include "lists.h"
/**
 *free_dlistint - free the elemnts of a double linked list
 *@head: the header
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr && ptr->next)
	{
		if (ptr->next)
		{
			ptr = ptr->next;
			if (ptr->prev)
				free(ptr->prev);
		}
		else
		{
			free(ptr);
		}
	}
	if (ptr)
		free(ptr);
}
