#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - swap values
 *@dest: char to size
 *@src: size
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int pos = 0;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		if (src[pos + 1] == '\0')
			dest[pos + 1] = src[pos + 1];
		pos++;
	}
	return (dest);
}
