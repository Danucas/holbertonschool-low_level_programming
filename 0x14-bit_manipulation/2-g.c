#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *get_bit - bin to dec
 *@n: int to check
 *@index: the index
 *Return: void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
