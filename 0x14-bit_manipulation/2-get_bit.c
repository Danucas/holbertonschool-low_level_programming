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
	unsigned long int grade = 1;
	unsigned int pos = 0;
	char str[65];

	if (n == 0 && index == 0)
	{
		return (0);
	}
	grade = grade << 63;
	while (!(n & grade))
	{
		grade >>= 1;
	}
	while (grade)
	{
		if (n & grade)
		{
			str[pos] = '1';
		}
		else
		{
			str[pos] = '0';
		}
		grade >>= 1;
		pos++;
	}
	str[pos] = 0;
	pos--;
	if (index <= pos)
		return (str[pos - index] - 48);
	return (-1);
}
