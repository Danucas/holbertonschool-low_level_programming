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
	int siz = getCharSize(src);

	for (pos = 0; pos < siz; pos++)
	{
		dest[pos] = src[pos];
	}
	return (dest);
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
