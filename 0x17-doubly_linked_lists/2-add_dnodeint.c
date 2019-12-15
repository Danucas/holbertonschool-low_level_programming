#include "lists.h"
/**
 *add_dnodeint - print the elemnts of a double linked list
 *@head: the header
 *@n: the new value
 *Return: element´s count
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
