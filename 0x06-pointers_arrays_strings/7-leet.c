#include "holberton.h"
/**
 *leet - concatnate
 *@s: dest pointer
 *Return: something
 */
char *leet(char *s)
{
	int pos = 0;
	int cm = 0;
	char comp[5][3];

	comp[0][0] = 'A';
	comp[0][1] = 'a';
	comp[0][2] = '4';
	comp[1][0] = 'E';
	comp[1][1] = 'e';
	comp[1][2] = '3';
	comp[2][0] = 'O';
	comp[2][1] = 'o';
	comp[2][2] = '0';
	comp[3][0] = 'T';
	comp[3][1] = 't';
	comp[3][2] = '7';
	comp[4][0] = 'L';
	comp[4][1] = 'l';
	comp[4][2] = '1';
	while (s[pos] != '\0')
	{
		for (cm = 0; cm < 5; cm++)
		{
			if (s[pos] == comp[cm][0] || s[pos] == comp[cm][1])
				s[pos] = comp[cm][2];
		}
		pos++;
	}
	return (s);
}
