#include "holberton.h"
int powe(int p, int times);
/**
*print_times_table - it prints alphabet
*@n:dsa.
*/
void print_times_table(int n)
{
	int one;
	int two;
	int li;
	int d;

	for (one = 0; one < n; one++)
	{
		for (two = 0; two < n; two++)
		{
			int r = one * two;
			int l = 0;

			while ((r / 10) > 0)
			{
				r /= 10;
				l++;
			}
			li = 0;
			r = one * two;
			while (li < 4)
			{
				if (li < (3 - l))
				{
					_putchar(' ');
				}
				else
				{
					d = r / (powe(10, 3 - li));
					_putchar('0' + d);
				}
				li++;
			}
			_putchar(',');
		}
		_putchar('\n');
	}
}
/**
*times_table - it prints alphabet
*@n:dsa.
*/
int powe(int p, int times)
{
	int n = p;
	int pos;

	for (pos = 0; pos < times; pos++)
	{
		n *= n;
	}
	return (n);
}
