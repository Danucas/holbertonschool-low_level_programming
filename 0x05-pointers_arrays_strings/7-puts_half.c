#include "holberton.h"
int getCharSize(char *s);
/**
 *puts_half - swap values
 *@str: char to size
 */
void puts_half(char *str)
{
	int pos;
	int siz = getCharSize(str);

	if (siz % 2 == 0)
	{
		pos = siz / 2;
	}
	else
	{
		pos = (siz + 1) / 2;
	}
	for (pos = pos; pos < siz; pos++)
	{
		_putchar(str[pos]);
	}
	_putchar('\n');
}
/**
 *getCharSize - length
 *@s: legnth
 *Return: length
 */
int getCharSize(char *s)
{
	int co = 0;

	while (s[co] != '\0')
	{
		co++;
	}
	return (co);
}
