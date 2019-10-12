#include "holberton.h"
/**
 *_puts - swap values
 *@s: char to size
 */
void _puts(char *s)
{
	int co = 0;

	while (s[co] != '\0')
	{
		_putchar(s[co]);
		co++;
	}
	_putchar('\n');
}
