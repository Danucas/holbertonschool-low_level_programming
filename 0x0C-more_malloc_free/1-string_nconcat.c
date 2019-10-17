#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *string_nconcat - dsads
 *@s1: dsa
 *@s2: dsa
 *@n: das
 *Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buf;
	unsigned int pos = 0, len = 0, f = 0;

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
		while (*(s2 + pos) != '\0')
		{
			len++;
			pos++;
		}
	}
	if (n >= len - f)
		n = len - f;
	len = f + n;
	buf = malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	pos = 0;
	while (pos < len)
	{
		if (pos < f)
			buf[pos] = *(s1 + pos);
		else
			buf[pos] = *(s2 + (pos - f));
		pos++;
	}
	buf[pos] = '\0';
	return (buf);
}
