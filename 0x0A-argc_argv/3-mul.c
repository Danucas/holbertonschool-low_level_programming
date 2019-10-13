#include "holberton.h"
#include <stdio.h>
int _atoi(char *s);
void mul(int argc, char *argv[]);
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	mul(argc, argv);
	return (0);
}
/**
 *mul -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void mul(int argc, char *argv[])
{
	int mul1;
	int mul2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mul1 = _atoi(argv[1]);
		mul2 = _atoi(argv[2]);
		printf("%d\n", mul1 * mul2);
	}

}
/**
 *_atoi -dsf
 *@s: args count
 *Return: dsad
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
				res = (res * 10) + (sign * (s[pos] - 48));
			}
			else
			{
				res = sign * (s[pos] - 48);
			}
		}
		else if (counting == 1)
			break;
		pos++;
	}
	return (res);
}
