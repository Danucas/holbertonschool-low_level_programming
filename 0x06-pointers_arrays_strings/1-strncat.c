#include "holberton.h"
#include <stdio.h>
int getLength(char *s);
/**
 *_strncat - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *@n: int
 *Return: something
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = getLength(dest);
	int pos = 0;
	
	while (src[pos] != '\0' && pos < n)
	{
		
		(*(dest + len)) = (*(src + pos));
		len++;
		pos++;
	}
	*(dest + len) = '\0';
	return (dest);
}

int getLength(char *s)
{
	int le = 0;

	while (*(s+le) != '\0')
	{
		le++;
	}
	return (le);
}
