#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *str_concat - dsads
 *@s1: dsa
 *@s2: dsa
 *Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *buf;
	unsigned int pos = 0;
	unsigned int len = 0;
	unsigned int f = 0;

	if (s1 == NULL)
		f = 0;
	else
	{
		while (*(s1 + len) != '\0')
		{
			len++;
			f = len;
		}
	}
	if (s2 == NULL)
		len = f;
	else
	{
		pos = 0;
		while (*(s2 + pos) != '\0')
		{
			len++;
			pos++;
		}
	}
	buf = malloc(sizeof(char) * (len + 1));
	pos = 0;
	while (pos < len)
	{
		if (pos < f)
			buf[pos] = *(s1 + pos);
		else
			buf[pos] = *(s2 + (pos - f));
		pos++;
	}
	return (buf);
}
