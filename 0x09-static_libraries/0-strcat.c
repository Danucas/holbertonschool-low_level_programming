#include "holberton.h"
int getLength(char *s);
/**
 *_strcat - concatnate
 *@dest: dest pointer
 *@src: src pointer
 *Return: something
 */
char *_strcat(char *dest, char *src)
{
	int len = getLength(dest);
	int pos = 0;

	while (src[pos] != '\0')
	{
		(*(dest + len)) = (*(src + pos));
		len++;
		pos++;
	}
	*(dest + len) = '\0';
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
