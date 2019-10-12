#include "holberton.h"
#include <stddef.h>
/**
 *_strchr - concatnate
 *@s: dest pointer
 *@c: src pointer
*Return: something
 */
char *_strchr(char *s, char c)
{
	int pos = 0;

	while ((*(s + pos)) != c  && (*(s + pos)) != '\0')
	{
		pos++;
	}
	if ((*(s + pos)) == c)
		return (s + pos);
	else
		return (0);
}
