#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - print list
 *@head: the head of the list
 *@str: string to add
 *Return: length
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *c;
	unsigned int l = 0;
	char *dup;

	c = malloc(sizeof(list_t));
	if (c == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup != NULL)
	{
		while (dup[l] != '\0')
		{
			l++;
		}
	}
	c->str = dup;
	c->len = l;
	c->next = *head;
	*head = c;
	return (c);
}
