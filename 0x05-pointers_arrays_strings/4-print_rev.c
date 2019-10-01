#include "holberton.h"
#include <stdio.h>
/**
 *print_rev - swap values
 *@s: char to size
 */
void print_rev(char *s)
{
	int co = 0;
	int pos;

	while (s[co] != '\0')
	{
		co++;
	}
	for (pos = co - 1; pos > -1; pos--)
	{
		_putchar(s[pos]);
	}
	_putchar('\n');
}
