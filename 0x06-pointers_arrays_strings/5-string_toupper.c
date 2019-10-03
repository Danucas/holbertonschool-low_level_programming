#include "holberton.h"
int getLength(char *s);
/**
 *string_toupper - concatnate
 *@s: dest pointer
 *Return: something
 */
char *string_toupper(char *s)
{
	int pos = 0;

	while (*(s + pos) != '\0')
	{
		if (*(s + pos) >= 97 && *(s + pos) <= 122)
		{
			*(s + pos) -= 32;
		}
		pos++;
	}
	return (s);
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
