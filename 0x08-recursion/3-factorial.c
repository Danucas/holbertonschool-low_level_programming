#include "holberton.h"
#include <stdio.h>
int getLength(char *s, int n);
/**
 *factorial - puts clone
 *@n: string
 *Return: something
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
/**
*getLength- puts clone
*@s: string
*@n:le
*Return: dsa
*/
int getLength(char *s, int n)
{
	if (*(s + n) != '\0')
	{
		return (getLength(s, n + 1));
	}
	else
	{
		return (n);
	}
}
