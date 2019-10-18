#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *_calloc - dsads
 *@nmemb: dsa
 *@size: dsa
 *Return: char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buf;
	unsigned int i = 0, s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	buf = malloc(s);
	if (buf == NULL)
		return (NULL);
	while (i < s)
	{
		buf[i] = 0;
		i++;
	}
	return (buf);
}
