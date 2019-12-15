#include "lists.h"
/**
 *dlistint_len - print the elemnts of a double linked list
 *@h: the header
 *Return: element´s count
 */
size_t dlistint_len(const dlistint_t *h)
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
