#include "holberton.h"
#include <stdio.h>
int getLength(char *s, int n);
/**
 *_pow_recursion - puts clone
 *@s: string
 *Return: something 
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
/**
*getLength- puts clone
*@s: string
*@n:le
*/
int getLength(char *s, int n)
{
	if (*(s + n) != '\0')
	{
		return(getLength(s, n + 1));
	}
	else
	{
		return (n);
	}
}
