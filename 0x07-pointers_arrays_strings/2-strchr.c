#include "holberton.h"
#include <stddef.h>
int getLength(char *s);
/**
 *_strchr - concatnate
 *@s: dest pointer
 *@c: src pointer
*Return: something
 */
char *_strchr(char *s, char c)
{
	int pos = 0;

	while ((*(s + pos)) != '\0')
	{
		if ((*(s + pos)) != c)
		{
			pos++;
		}
		else
		{
			break;
		}
	}
	return (s + pos);
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
