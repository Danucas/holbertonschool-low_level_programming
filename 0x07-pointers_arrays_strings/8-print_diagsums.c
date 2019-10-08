#include "holberton.h"
#include <stdio.h>
int getLength(char *s);
/**
 *print_diagsums - concatnate
 *@a: dest p
 *@size: jdjd
*Return: something
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1;
	int sum2;

	for (x = 0; x < size; x++)
	{
		sum1 += *(a + ((x * size) + x));
		sum2 += *(a + (((x + 1) * size) - (x + 1)));
	}
	printf("%d, %d\n", sum1, sum2);
}
/**
*getLength - concatnate
*@s: dest pointer
*Return: something
*/

int getLength(char *s)
{
	int le = 0;

	while (*(s + le) != '\0')
	{
		le++;
	}
	return (le);
}
