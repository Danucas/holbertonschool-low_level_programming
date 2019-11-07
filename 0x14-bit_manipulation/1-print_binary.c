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
	}
	while (n >= grade)
	{
		grade *= 2;
	}
	grade *= 0.5;
	while (grade > 0)
	{
		if (n >= grade)
		{
			_putchar('1');
			n = (n - grade);
		}
		else
		{
			_putchar('0');
		}
		grade *= 0.5;
	}
}
