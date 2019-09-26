#include "holberton.h"
#include <stdlib.h>
int get_digits_count(int head);
int powd(int a, int b);
/**
 *print_number - print numbers with char
 *@n: int to print
 */
void print_number(int n)
{
	int head = n;
	int count = get_digits_count(head);
	int pos;
	int div = powd(10, count >= 2 ? count - 2 : 1);
	int d;

	if (n < 0)
	{
		_putchar(45);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else if (head < 9 && head > 0)
	{
		_putchar('0' + abs(n));
	}
	else
	{
		for (pos = 0; pos < count; pos++)
		{
			d = head / div;
			head = head % div;
			div /= 10;
			_putchar(abs(d) + '0');
		}
	}
}
/**
 *get_digits_count - get legth
 *@head: int to get
 *Return: length
 */
int get_digits_count(int head)
{
	int digitscount = 1;

	while (head / 10 != 0)
	{
		head /= 10;
		digitscount++;
	}
	return (digitscount);
}
/**
 *powd - do something
 *Return: powed
 *@a: dsa
 *@b: dsa
 */
int powd(int a, int b)
{
	int p;
	int n = a;

	for (p = 0; p < b; p++)
	{
		a *= n;
	}
	return (a);
}
