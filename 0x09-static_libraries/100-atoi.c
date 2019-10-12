#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *_atoi - swap values
 *@s: size
 *Return: pointer
 */
int _atoi(char *s)
{
	int pos = 0;
	int sign = 1;
	int res = 0;
	int counting = 0;

	while (s[pos] != '\0')
	{
		if (s[pos] == '+')
		{
			sign *= 1;
		}
		else if (s[pos] == '-')
		{
			sign *= -1;
		}
		if (s[pos] >= 48 && s[pos] <= 57)
		{
			counting = 1;
			if (res != 0)
			{
				/*printf("char: %c res: %d\t", s[pos], res);*/
				res = (res * 10) + (sign * (s[pos] - 48));
			}
			else
			{
				/*printf("char: %c res: %d\t", s[pos], res);*/
				res = sign * (s[pos] - 48);
			}
		}
		else if (counting == 1)
			break;
		pos++;
	}
	return (res);
}
/**
 *getCharSize - l
 *@s: l
 *Return:le
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
