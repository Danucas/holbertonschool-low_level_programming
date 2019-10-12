#include "holberton.h"
/**
 *_strlen - swap values
 *@s: char to size
 *Return: count
 */
int _strlen(char *s)
{
	int co = 0;

	while (s[co] != '\0')
	{
		co++;
	}
	return (co);
}
