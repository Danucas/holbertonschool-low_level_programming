#include "lists.h"
/**
 *pop_listint - something
 *@head: the head
 *Return: the poped data
 */

int pop_listint(listint_t **head)
{
	listint_t *poped;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	poped = *head;
	*head = (*head)->next;
	free(poped);
	return (n);
}
