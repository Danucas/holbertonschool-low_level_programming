#include <stdio.h>
void add(int argc, char *argv[]);
int _atoi(char *s);
int check(char *s);
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	add(argc, argv);
	return (0);
}
/**
 *add -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void add(int argc, char *argv[])
{
	int res = 0;
	int che = 1;
	int sum;
	int pos;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (pos = 1; pos < argc; pos++)
		{
			che = check(argv[pos]);
			if (che == 1)
			{
				sum = _atoi(argv[pos]);
				res += sum;
			}
			else
			{
				printf("Error\n");
				break;
			}
		}
		if (che == 1)
			printf("%d\n", res);
	}
}
/**
 *check -dsf
 *@s: args count
 *Return: 0 if todo esta good
*/
int check(char *s)
{
	int pos = 0;
	int r = 1;

	for (pos = 0; s[pos] != '\0'; pos++)
	{
		if (s[pos] != '+' && s[pos] != '-')
		{
			if (s[pos] < 48 || s[pos] > 57)
				r = 0;
			break;
		}
	}
	return (r);
}
/**
 *_atoi -dsf
 *@s: args count
 *Return: 0 if todo esta good
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
