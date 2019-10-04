#include "holberton.h"
/**
 *rot13 - concatnate
 *@s: dest pointer
 *Return: something
 */
char *rot13(char *s)
{
	int pos = 0;
	int i = 0;
	int less = 0;
	char comp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[pos] != '\0')
	{
		i = 0;

		while (i < 52 && (s[pos] != comp[i]))
		{
			i++;
		}
		less = s[pos] == comp[i];
		if (less == 1)
		{
			s[pos] = rot[i];
			less  = 0;
		}
		pos++;
	}
	return (s);
}
