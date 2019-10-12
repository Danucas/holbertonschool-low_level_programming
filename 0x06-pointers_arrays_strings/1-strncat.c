#include "holberton.h"
#include <stdio.h>
/**
 *_strncat - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *@n: int
 *Return: something
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int pos = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[pos] != '\0' && pos < n)
	{
		(*(dest + len)) = (*(src + pos));
		len++;
		pos++;
	}
	*(dest + len) = '\0';
	return (dest);
}
