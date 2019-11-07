#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *clear_bit - bin to dec
 *@n: int to check
 *@index: the index
 *Return: void
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((*n & (1 << index)))
		*n -= 1 << index;
	return (1);
}
