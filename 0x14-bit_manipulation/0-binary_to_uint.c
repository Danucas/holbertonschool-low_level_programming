#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
unsigned int *get_bintab();
/**
 *binary_to_uint - bin to dec
 *@b: string to check
 *Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, pos = 0;
	unsigned int *bin_tab;

	bin_tab = get_bintab();

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	b--;
	while (*b != '\0')
	{
		if (*b == '1')
		{
			res = res + *(bin_tab + pos);
		}
		b--;
		pos++;
	}
	free(bin_tab);
	return (res);
}
/**
 *get_bintab - bin to dec
 *Return: the converted value
 */

unsigned int *get_bintab()
{
	unsigned int *bin_tab;
	unsigned int max = 1;
	unsigned int grade = 1;

	bin_tab = malloc(sizeof(unsigned int) * 32);
	if (bin_tab == NULL)
		return (NULL);
	*bin_tab = grade;
	for (; max < 32; max++)
	{
		grade *= 2;
		*(bin_tab + max) = grade;
	}
	return (bin_tab);
}
