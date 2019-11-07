#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *set_bit - bin to dec
 *@n: int to check
 *@index: the index
 *Return: void
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (!(*n & (1 << index)))
		*n += 1 << index;
	return (1);
}
