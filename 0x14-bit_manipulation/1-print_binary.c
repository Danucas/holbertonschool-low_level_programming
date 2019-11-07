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
	unsigned long int grade;
	int prub = (int) n;
	int check = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (grade = 1 << 31; grade > 0; grade *= 0.5)
	{
		if (n & grade)
		{
			check = 1;
			_putchar("1");
		}
		else if (check == 1)
			_putchar("0");
	}


}
