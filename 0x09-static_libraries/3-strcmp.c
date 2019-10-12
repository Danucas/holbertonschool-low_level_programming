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
	int pos = 0;
	int res;

	while ((*(s1 + pos) != '\0' && *(s2 + pos) != '\0'))
	{
		res = *(s1 + pos) - *(s2 + pos);
		if (res == 0)
			pos++;
		else
			break;
	}
	return (res);
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
