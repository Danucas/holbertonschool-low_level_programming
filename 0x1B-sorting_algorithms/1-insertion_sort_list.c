#include "sort.h"
/**
 *swap - swap the values
 *@ac: the list to be sorted
 */
void swap(listint_t *ac)
{
	printf("puto swap\n");
	for (; ac->prev && ac->n > ac->prev->n; ac = ac->prev)
	{

		if (ac->next)
			ac->next->prev = ac->prev;
		if (ac->prev)
			ac->prev->next = ac->next;
	        ac->next = ac->prev;
		ac->prev = ac->prev->prev;
		printf("puto\n");
	}
}

/**
 *insertion_sort_list - sort list using insertion algorithm
 *@list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *top = *list;

	for (; top; top = top->next)
	{
		printf("puto1\n");
		if (top->next && top->n > top->next->n)
		{
			printf("puto2\n");
			swap(top->next);
			print_list(*list);
		}
	}
}
