#include "holberton.h"
#include <stdio.h>
void print_tales(char *s, int len, int pos);
void getLength(char *s, int n);
/**
 *_print_rev_recursion - puts clone
 *@s: string
 */
void _print_rev_recursion(char *s)
{
	getLength(s, 0);
}
/**
 *print_tales - dsa
 *@s:dsa
 *@len:dsa
 *@pos:dsa
 */
void print_tales(char *s, int len, int pos)
{
	if (pos < len)
	{
		_putchar(*s);
		s--;
		print_tales(s, len, pos + 1);
	}
	else
	{
		return;
	}
}
/**
*getLength- puts clone
*@s: string
*@n:dsa
*/
void getLength(char *s, int n)
{
	if (*(s) != '\0')
	{
		s++;
		getLength(s, n + 1);
	}
	else
	{
		s--;
		print_tales(s, n, 0);
	}
}
