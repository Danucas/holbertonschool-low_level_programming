#include "holberton.h"
/**
 *_strspn - concatnate
 *@s: dest pointer
 *@accept: src pointer
*Return: something
 */
unsigned int _strspn(char *s, char *accept)
{
	int pos = 0;
	int cpos = 0;
	unsigned int res = 0;

	while ((*(s + pos)) != ' ')
	{
		while ((*(accept + cpos)) != '\0')
		{
			if ((*(s + pos)) == (*(accept + cpos)))
			{
				res += 1;
			}
			cpos++;
		}
		cpos = 0;
		pos++;
	}
	return (res);
}
