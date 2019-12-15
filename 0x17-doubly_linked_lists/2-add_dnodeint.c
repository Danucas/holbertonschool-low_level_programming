#include "lists.h"
/**
 *add_dnodeint - print the elemnts of a double linked list
 *@head: the header
 *@n: the new value
 *Return: element´s count
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = ptr;
	if (ptr)
	{
		ptr->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
