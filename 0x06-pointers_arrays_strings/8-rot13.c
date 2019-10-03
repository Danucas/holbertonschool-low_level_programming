#include "holberton.h"
#include <stdbool.h>
/**
 *rot13 - concatnate
 *@s: dest pointer
 *Return: something
 */
char *rot13(char *s)
{
	int pos = 0;
	bool less = false;
	bool greater = false;

	while (s[pos] != '\0')
	{
		less = s[pos] >= 65 && s[pos] < 78;
		less = (s[pos] >= 97 && s[pos] < 110) || less;
		greater = s[pos] >= 78 && s[pos] <= 90;
		greater = (s[pos] >= 110 && s[pos] <= 122) || greater;
		while (less || greater)
		{
			if (less)
				s[pos] += 13;
			else
				s[pos] -= 13;
			break;
		}
		pos++;
	}
	return (s);
}
