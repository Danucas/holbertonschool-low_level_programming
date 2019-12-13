#include "lists.h"
/**
 *print_dlistint - print the elemnts of a double linked list
 *@h: the header
 *Return: element´s count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
