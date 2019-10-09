#include "holberton.h"
int getLength(char *s, int n);
/**
 *_strlen_recursion - puts clone
 *@s: string
 *Return: something
*/
int _strlen_recursion(char *s)
{
	return (getLength(s, 0));
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
		return (getLength(s, n + 1));
	}
	else
	{
		return (n * sizeof(char));
	}
}
