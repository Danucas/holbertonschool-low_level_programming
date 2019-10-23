#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - iterator
 *@array: some
 *@size: some
 *@cmp:some
 *Return: -1 if error else index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int resp = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				resp = cmp(array[i]);
				if (resp != 0)
					break;
			}
			return ((resp == 0 ? -1 : i));
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
}
