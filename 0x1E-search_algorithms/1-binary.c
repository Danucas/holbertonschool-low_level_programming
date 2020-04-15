#include "search_algos.h"
/**
 *binary_search - perform a search with the binary algorithm
 *@array: the array to check
 *@size: the array size
 *@value: the value to find
 *Return: the index of the value in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, m, i, h;

	if (!array)
		return (-1);
	h = size;
	while (l < h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h && i < size; i++)
		{
			printf("%d", array[i]);
			if (i < h - 1)
				printf(", ");
		}
		printf("\n");
		m = (l + (h - 1)) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}
	return (-1);
}
