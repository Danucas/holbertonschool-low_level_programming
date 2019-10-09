#include "holberton.h"
#include <stdio.h>
double test(double ts, int n);
/**
 *_sqrt_recursion - puts clone
 *@n: string
 *Return: something
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (test((double) n, n));
}
/**
*test- puts clone
*@ts: string
*@n:le
*Return: dsa
*/
double test(double ts, int n)
{
	double res = ((ts / 2) * (ts / 2));
	int newts;
	double diff = (n - res);

	if (diff < 0)
		diff *= -1;
	if (res > n)
	{
		if (diff < 1)
		{
			newts = (int) ts / 2;
			res = (newts * newts);
			if (res == n)
			{
				return (newts);
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			return (test(ts / 2, n));
		}
	}
	else if (res < n && res > 0)
	{
		return (test((ts * 1.2), n));
	}
	else if (res == 0)
		return (ts / 2);
	else
		return (test(ts / 2, n));
}
