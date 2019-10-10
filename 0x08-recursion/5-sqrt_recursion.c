#include "holberton.h"
#include <stdio.h>
int test(int ts, int n);
/**
 *_sqrt_recursion - puts clone
 *@n: string
 *Return: something
*/
int _sqrt_recursion(int n)
{
	return (test(n, 1));
}
/**
*test- puts clone
*@ts: string
*@n:le
*Return: dsa
*/
int test(int ts, int n)
{
	if (n * n == ts)
	{
		return (n);
	}
	else if (n * n > ts)
	{
		return (-1);
	}
	else
	{
		return (test(ts, n + 1));
	}
}
