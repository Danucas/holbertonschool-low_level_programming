#include "lists.h"
/**
 *delete_dnodeint_at_index - print the elemnts of a double linked list
 *@head: the header
 *@index: the header
 *Return: element´s count
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *prev;
	unsigned int pos = 0;

	while (ptr)
	{	prev = ptr;
		if (pos == index)
		{
			if (ptr->prev && ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = prev->prev;
			}
			if (pos == 0)
			{
				*head = ptr->next;
			}
			free(ptr);
			return (1);
		}
		pos++;
		ptr = ptr->next;
	}
	(void) prev;
	return (-1);
}
