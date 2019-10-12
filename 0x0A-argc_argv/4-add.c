#include "holberton.h"
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
 *my_name -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void add(int argc, char *argv[])
{
	int res = 0;
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
			sum = check(argv[pos]);
			if (sum == 1)
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
		if (sum != 0)
			printf("%d\n", res);
	}

}

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
