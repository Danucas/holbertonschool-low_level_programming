#include "holberton.h"
#include <stddef.h>
/**
 *_strstr - concatnate
 *@haystack: dest pointer
 *@needle: src pointer
*Return: something
 */
char *_strstr(char *haystack, char *needle)
{
	int pos = 0;
	int cpos = 0;
	int matched = 0;
	int compl = 0;
	int stringL = 0;
	
	while (needle[compl] != '\0')
	{
		compl++;
	}
	while (haystack[stringL] != '\0')
	{
		stringL++;
	}
       	while (pos <= stringL - compl && matched == 0)
	{
		cpos = 0;
		while (*(needle + cpos) != '\0')
		{
			if (*(haystack + pos + cpos) == *(needle + cpos))
				cpos++;
			else
				break;
		}
		if (cpos != compl)
			pos++;
		else
		{
			matched = 1;
			break;
		}

	}
	if (matched == 1)
		return (haystack + pos);
	else
		return (NULL);
}
