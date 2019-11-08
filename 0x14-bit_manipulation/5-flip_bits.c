#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *flip_bits - bin to dec
 *@n: int to check
 *@m: the index
 *Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fliped = 0;
	unsigned long int res;

	res = n ^ m;
	while (res)
	{
		fliped += res & 1;
		res >>= 1;
	}
	return (fliped);
}
