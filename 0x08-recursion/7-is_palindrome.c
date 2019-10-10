#include "holberton.h"
#include <stdio.h>
int getLength(char *s, int n);
int test(char *ts, int len, int p);
/**
 *is_palindrome - puts clone
 *@s: string
 *Return: something
*/
int is_palindrome(char *s)
{
	int len = getLength(s, 0);

	return (test(s, len - 1, 0));
}
/**
 *getLength - dasd
 *@s: dsa
 *@n:dsa
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
/**
*test- puts clone
*@ts: string
*@len:le
*@p: dsa
*Return: dsa
*/
int test(char *ts, int len, int p)
{
	if (*(ts + p) == *(ts + len) && *(ts + p) != '\0')
		return (test(ts, len - 1, p + 1));
	else if (*(ts + p) == '\0')
		return (1);
	else
		return (0);
}
