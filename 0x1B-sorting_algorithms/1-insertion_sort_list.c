#include "sort.h"
/**
 *swap - swap the values
 *@ac: the list to be sorted
 */
void swap(listint_t **head, listint_t *top)
{
        listint_t *prev = top->prev, *next;

	while (top->prev)
	{
		prev = top->prev;
		if (top->prev && top->n < top->prev->n)
		{
			if (top->prev->prev)
				top->prev->prev->next = top;
			next = top->next;
			top->prev->next = next;
			if (next)
				next->prev = top->prev;
			top->next = prev;
			if (prev)
			{
				top->prev = prev->prev;
				prev->prev = top;
			}
			else
				top->prev = prev;
		}
		else
			break;
	}
	if (!top->prev)
		*head = top;
        (void) head;
}

/**
 *insertion_sort_list - sort list using insertion algorithm
 *@list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *top = (*list)->next;

	while (top)
	{
		if (top->prev && top->prev->n > top->n)
		{
			swap(list, top);
			print_list(*list);
		}
		top = top->next;
	}
}
