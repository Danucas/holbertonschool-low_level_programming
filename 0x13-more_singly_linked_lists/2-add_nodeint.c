#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint - print list
 *@head: the head of the list
 *@n: string to add
 *Return: length
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = *head;
	*head = c;
	return (c);
}
