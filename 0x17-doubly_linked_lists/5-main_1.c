#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 2);
	if (!node)
	{
		printf("No node at index 2\n");
		return (1);
	}
	printf("%d\n", node->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
