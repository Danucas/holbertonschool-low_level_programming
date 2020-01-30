#include "sort.h"
/**
 *swap_bubble -  swapping function
 *@array: the array
 *@x: the position
 */
void swap_bubble(int *array, int x)
{
	int tmp = array[x];
	array[x] = array[x + 1];
	array[x + 1] = tmp;
}

/**
 *bubble_sort - sort a linked list using bubble algo
 *@array: the array to sort
 *@size: the array size
 */
void bubble_sort(int *array, size_t size)
{
	int x, y;
	int flag = 0;

	while (!flag)
	{
		flag = 1;
		for (x = 0; x < size -1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_bubble(array, x);
				flag = 0;
				print_array(array, size);
			}
		}
	}

}
