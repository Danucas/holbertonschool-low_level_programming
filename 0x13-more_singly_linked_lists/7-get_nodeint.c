#include "lists.h"
/**
 *get_nodeint_at_index - something
 *@head: the head
 *@index: the index
 *Return: the poped data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n = 0;

	while (node != NULL)
	{
		if (n == index)
			return (node);
		if (node->next != NULL)
			node = node->next;
		else
			break;
		n++;
	}
	return (NULL);
}
