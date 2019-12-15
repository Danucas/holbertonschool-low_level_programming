#include "lists.h"
/**
 *add_dnodeint_end - print the elemnts of a double linked list
 *@head: the header
 *@n: the new value
 *Return: element´s count
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!ptr)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}
	new_node->prev = ptr;
	ptr->next = new_node;
	return (new_node);
}
