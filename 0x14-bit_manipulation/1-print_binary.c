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
	int pos = 0;
	unsigned long int bin_tab[32];
	unsigned int max = 1;
	unsigned long int grade = 1;

	bin_tab[0] = grade;
	for (; max < 32; max++)
	{
		grade *= 2;
		bin_tab[max] = grade;
	}


	if (n == 0)
	{
		_putchar('0');
	}
	while (n >= bin_tab[pos])
	{
		pos++;
	}

	pos--;
	while (pos >= 0)
	{
		if (n >= bin_tab[pos])
		{
			_putchar('1');
			n = (n - bin_tab[pos]);
		}
		else
		{
			_putchar('0');
		}
		pos--;
	}
}
/**
 *get_bintab - bin to dec
 *Return: the converted value
 */

unsigned long int *get_bintab()
{
	unsigned long int bin_tab[32], *bin;
	unsigned int max = 1;
	unsigned long int grade = 1;

	bin_tab[0] = grade;
	for (; max < 32; max++)
	{
		grade *= 2;
		bin_tab[max] = grade;
	}
	bin = bin_tab;
	return (bin);
}
