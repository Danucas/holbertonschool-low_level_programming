#include "lists.h"
/**
 *insert_dnodeint_at_index - print the elemnts of a double linked list
 *@head: the header
 *@n: the new value
 *Return: element´s count
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new_node;
	unsigned int pos = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!ptr && pos == idx)
	{
		*h = new_node;
		return (new_node);
	}
	while (ptr)
	{
		if (pos == idx)
		{
			new_node->prev = ptr->prev;
			ptr->prev->next = new_node;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (ptr);
		}
		ptr = ptr->next;
		pos++;
	}
	free(new_node);
	return (NULL);
}
