#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *print_array - swap values
 *@a: char to size
 *@n: size
 */
void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", a[pos]);
		if (pos != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 *getCharSize - l
 *@s: le
 *Return: len
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
