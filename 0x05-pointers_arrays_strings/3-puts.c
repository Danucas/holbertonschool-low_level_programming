#include "holberton.h"
/**
 *_puts - swap values
 *@str: char to size
 */
void _puts(char *str)
{
	int co = 0;

	while (str[co] != '\0')
	{
		_putchar(str[co]);
		co++;
	}
	_putchar('\n');
}
