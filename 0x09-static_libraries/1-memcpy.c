#include "holberton.h"
/**
 *_memcpy - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *@n: int
 *Return: something
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos = 0;

	while (pos < n)
	{
		(*(dest + pos)) = (*(src + pos));
		pos++;
	}
	return (dest);
}
