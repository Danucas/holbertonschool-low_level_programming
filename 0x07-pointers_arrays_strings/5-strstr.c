#include "holberton.h"
#include <stdio.h>
int getLength(char *s);
/**
 *_strstr - concatnate
 *@s: dest pointer
 *@c: src pointer
*Return: something
 */
char *_strstr(char *haystack, char *needle)
{
	int pos = 0;
	int cpos = 0;
	int matched = 0;
	int compl = getLength(needle);
	int stringL = getLength(haystack);

	for (pos = 0; pos < stringL - comp - 1; pos++)
	{

		while ((*(needle + cpos)) == (*(haystack + pos + cpos)))
		{
			cpos++;
		}
		if (cpos != compl)
		{
			cpos = 0;
			pos++;
		}
		else
		{
			matched = 1;
			break;
		}
	}
	printf("length: %d", compl);
	if (matched == 1)
		return (haystack + pos -1);
	else
		return (NULL);
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
