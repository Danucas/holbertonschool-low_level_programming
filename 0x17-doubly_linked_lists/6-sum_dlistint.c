#include "lists.h"
/**
 *sum_dlistint - print the elemnts of a double linked list
 *@head: the header
 *Return: element´s count
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	const dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
