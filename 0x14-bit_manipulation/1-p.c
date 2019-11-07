#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *print_binary - bin to dec
 *@n: int to check
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int grade = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	grade = grade << 31;
	while (!(n & grade))
	{
		grade >>= 1;
	}
	while (grade)
	{
		if (n & grade)
			_putchar('1');
		else
			_putchar('0');
		grade >>= 1;
	}
}
