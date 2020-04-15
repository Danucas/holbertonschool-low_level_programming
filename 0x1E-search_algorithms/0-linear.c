#include "search_algos.h"

/**
 *linear_search - performs a linear searching algorithm
 *@array: the array to check
 *@size: the size of the array
 *@value: the value to find in the array
 *Return: the index of the value, -1 if it doesn exists
 */
int linear_search(int *array, size_t size, int value)
{
	size_t pos;

	for (pos = 0; pos < size; pos++)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
	}
	return (-1);
}
