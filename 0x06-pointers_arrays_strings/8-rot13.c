#include "holberton.h"
/**
 *rot13 - concatnate
 *@s: dest pointer
 *Return: something
 */
char *rot13(char *s)
{
	int pos = 0;
	int less = 0;
	int greater = 0;

	while (s[pos] != '\0')
	{
		less = s[pos] >= 65 && s[pos] < 78;
		less = (s[pos] >= 97 && s[pos] < 110) || less == 1;
		greater = s[pos] >= 78 && s[pos] <= 90;
		greater = (s[pos] >= 110 && s[pos] <= 122) || greater == 1;
		while (less == 1 || greater == 1)
		{
			if (less == 1)
				s[pos] += 13;
			else
				s[pos] -= 13;
			less = 0;
			greater = 0;
			break;
		}
		pos++;
	}
	return (s);
}
