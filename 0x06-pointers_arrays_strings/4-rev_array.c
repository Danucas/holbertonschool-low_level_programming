#include "holberton.h"
int getLength(char *s);
/**
 *reverse_array - concatnate
 *@a: dest pointer
 *@n: src pointer
 *Return: something
 */
void reverse_array(int *a, int n)
{
	int pos;
	int tmp;

	n--;
	for (pos = 0; pos < n; pos++)
	{
		tmp = a[pos];
		a[pos] = a[n - pos];
		a[n - pos] = tmp;
	}
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
