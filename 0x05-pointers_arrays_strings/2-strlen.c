#include "holberton.h"
#include <stdio.h>
/**
 *swap_int - swap values
 *@s: char to size
 */
int _strlen(char *s)
{
        
	int co = 0;
	while (s[co]!='\0')
	{
		co++;
	}
	return (co);
}
