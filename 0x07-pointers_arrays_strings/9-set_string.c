#include "holberton.h"
#include <stdio.h>
int getLength(char *s);
/**
 *set_string - concatnate
 *@s: dest p
 *@to: jdjd
*Return: something
 */
void set_string(char **s, char *to)
{
	*s = to;
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
