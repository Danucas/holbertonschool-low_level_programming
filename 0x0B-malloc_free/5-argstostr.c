#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *_strlen - fdsafsa
 *@s: dfs
 *Return: dsa
 */
int _strlen(char *s)
{
	int co = 0;

	while (s[co] != '\0')
	{
		co++;
	}
	return (co);
}
/**
 *argstostr - dsads
 *@ac: dsa
 *@av: dsa
 *Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *buf;
	int *lengths;
	int final_len = 0;
	int p;
	int subp;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	lengths = malloc(sizeof(int) * (ac));
	for (p = 0; p < ac; p++)
	{
		lengths[p] = _strlen(av[p]);
		final_len += lengths[p] + 1;
	}
	buf = malloc(sizeof(char) * final_len);
	if (lengths == NULL || buf == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (subp = 0; av[p][subp] != '\0'; subp++)
		{
			buf[count + subp] = av[p][subp];
		}
		buf[count + subp] = '\n';
		count += lengths[p] + 1;
	}
	buf[count + subp] = '\0';
	return (buf);
}
