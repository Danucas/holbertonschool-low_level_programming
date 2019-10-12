#include "holberton.h"
int getLength(char *s);
/**
 *_strncpy - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *@n: int
 *Return: something
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos = 0;

	while (src[pos] != '\0' && pos < n)
	{
		(*(dest + pos)) = (*(src + pos));
		pos++;
	}
	while (pos < n)
	{
		*(dest + pos) = '\0';
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
