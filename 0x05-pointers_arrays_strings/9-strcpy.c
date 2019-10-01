#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *_strcpy - swap values
 *@a: char to size
 *@n: size
 */
char *_strcpy(char *dest, char *src)
{
       	int pos;
	int siz = getCharSize(src);
      
	for (pos = 0; pos < siz; pos++){
		dest[pos] = src[pos];
	}
	pos = 0;
	while (pos < siz )
	{
		if (dest[pos] == '\0' && pos > 1)
			printf("has null at end\nlast char: %c\n", dest[pos-1]);
		pos++;
	}
	return (dest);
}

int getCharSize(char *s)
{
	int co = 0;
	while (s[co]!='\0')
        {
                co++;
        }
	return (co);
}
