#include "lists.h"
/**
 *sum_listint - something
 *@head: the head
 *Return: the poped data
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int n = 0;

	if (node == NULL)
		return (n);
	while (node != NULL)
	{
		n += node->n;
		if (node->next != NULL)
			node = node->next;
		else
			break;
	}
	return (n);
}
