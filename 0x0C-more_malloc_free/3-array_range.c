#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 *array_range - dsads
 *@min: dsa
 *@max: dsa
 *Return: char pointer
 */
int *array_range(int min, int max)
{
	int *buf;
	int i = 0, s, len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	s = sizeof(int) * (len);
	buf = malloc(s);
	if (buf == NULL)
		return (NULL);
	while (i < len && min <= max)
	{
		buf[i] = min;
		i++;
		min++;
	}
	return (buf);
}
