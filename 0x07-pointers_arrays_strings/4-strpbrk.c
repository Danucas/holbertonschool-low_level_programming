#include "holberton.h"
#include <stddef.h>
int getLength(char *s);
/**
 *_strpbrk - concatnate
 *@s: dest pointer
 *@c: src pointer
*Return: something
 */
char *_strpbrk(char *s, char *accept)
{
	int pos = 0;
	int cpos = 0;
	int matched = 0;

	while ((*(s + pos)) != '\0' && matched == 0)
	{
		while ((*(accept + cpos)) != '\0')
		{
			
			if ((*(s + pos)) == (*(accept + cpos)))
			{
				matched = 1;
				break;
			}
			cpos++;
		}
		if (matched == 0)
		{
			cpos = 0;
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
