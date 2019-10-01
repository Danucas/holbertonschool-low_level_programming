#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
int powe(int d, int p);
/**
 *_strcpy - swap values
 *@dest: char to size
 *@src: size
 *Return: pointer
 */
int _atoi(char *s)
{
	int pos = 0;
	int len = getCharSize(s);
	int mul;
	int sign = 1;
	int translated_value;
	int redirPos = 0; 

	for (pos = 0; pos < len; pos++)
	{
		if (s[pos] == '-')
		{
			sign = -1;
		}
		else if (s[pos] > 47 && s[pos] < 58)
		{
			s[redirPos] = s[pos];
		}
	     
	}
	
	printf("translated: %d\nchar: %s", translated_value, s);
	return (0);
}
/**
 *powe - pow
 *@d: de
 *@p: ds
 *Return: powed
 */
int powe(int d, int p)
{
	int pot = d;
	int pos = 1;

	for (pos = 1; pos < p; pos++)
	{
		pot *= d;
	}
	return (pot);
}
/**
 *getCharSize - l
 *@s: l
 *Return:le
 */

int getCharSize(char *s)
{
	int co = 0;

	while (s[co] != '\0')
	{
		co++;
	}
	return (co);
}
