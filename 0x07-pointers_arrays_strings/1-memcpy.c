#include "holberton.h"
int getLength(char *s);
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
