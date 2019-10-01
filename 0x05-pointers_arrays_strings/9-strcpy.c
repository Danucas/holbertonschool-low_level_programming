#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *_strcpy - swap values
 *@dest: char to size
 *@src: size
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int pos;
	char *p = dest;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		if (src[pos + 1] == '\0')
			dest[pos + 1] = src[pos + 1];
		pos++;
	}
	return (p);
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
