#include "holberton.h"
int getLength(char *s);
/**
 *_memset - concatnate
 *@s: dest pointer
 *@b: src pointer
 *@n: int
 *Return: something
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos = 0;

	while (pos < n)
	{
		(*(s + pos)) = b;
		pos++;
	}
	return (s);
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
