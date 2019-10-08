#include "holberton.h"
int getLength(char *s);
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
	int compl = getLength(needle);
	int stringL = getLength(haystack);

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
		return (haystack += stringL);
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
