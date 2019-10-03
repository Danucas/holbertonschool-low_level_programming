#include "holberton.h"
int getLength(char *s);
/**
 *_strcmp - concatnate
 *@s1: dest pointer
 *@s2: src pointer
 *Return: something
 */
int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
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
