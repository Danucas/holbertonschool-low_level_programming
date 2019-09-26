#include "holberton.h"
#include <stdbool.h>
int get_digits_count(int head);
/**
 *print_number - print numbers with char
 *@n: int to print
 */
void print_number(int n)
{
	int head = n;
	int count = get_digits_count(head);
	int pos;
	int d;
	int repos;
	bool is_neg;

	if (n < 0)
	{
		count++;
		head *= -1;
		is_neg = true;
	}

	for (pos = 0; pos < count; pos++)
	{
		_putchar('0');
	}
	for (pos = 0; pos < count; pos++)
	{
		d  = head % 10;
		head = head / 10;
		for (repos = 1; repos < pos + 2; repos++)
		{
			_putchar('\b');
		}
		if (is_neg && pos == count - 1)
		{
			_putchar(45);
		}
		else
		{
			_putchar('0' + d);
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
