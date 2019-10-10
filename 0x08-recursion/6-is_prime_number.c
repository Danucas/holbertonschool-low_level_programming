#include "holberton.h"
#include <stdio.h>
int test(int ts, int n);
/**
 *is_prime_number - puts clone
 *@n: string
 *Return: something
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (test(n, 2));
}
/**
*test- puts clone
*@ts: string
*@n:le
*Return: dsa
*/
int test(int ts, int n)
{
	if (n > ts / 2)
		return (1);
	if (ts % n == 0 && n == 2)
	{
		return (0);
	}
	if (ts % n != 0 && n == 2)
	{
		return (test(ts, n + 1));
	}
	else if (ts % n != 0)
	{
		return (test(ts, n + 2));
	}
	else
		return (0);
}
