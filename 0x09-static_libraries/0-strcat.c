#include "holberton.h"
int getLength(char *s);
/**
 *_strcat - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *Return: something
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int pos = 0;

	while (dest[0] != '\n')
	{
		len++;
	}

	while (src[pos] != '\0')
	{
		(*(dest + len)) = (*(src + pos));
		len++;
		pos++;
	}
	*(dest + len) = '\0';
	return (dest);
}

