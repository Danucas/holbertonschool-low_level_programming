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

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
				break;
			if (!((n & 1) == (m & 1)))
				fliped++;
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (fliped);
}
