#include "holberton.h"
#include <stdio.h>
void getLength(char *s);
/**
 *_print_rev_recursion - puts clone
 *@s: string
 */
void _print_rev_recursion(char *s)
{
	if (*(s) == '\n')
	{
		getLength(s);
	}
	else
	{
		_putchar(*(s));
		s--;
		if (*(s) == '\n')
		{
			_putchar(*(s));
			_putchar('\0');
			return;
		}
		else
		{
			_print_rev_recursion(s);
		}
	}
}
/**
*getLength- puts clone
*@s: string
*/
void getLength(char *s)
{
	if (*(s + 1) != '\0')
	{
		s++;
		getLength(s);
	}
	else
	{
		_print_rev_recursion(s);
	}
}
