#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *rev_string - swap values
 *@str: char to size
 */
void rev_string(char *s)
{
        
	int pos;
	int chp = 0;
	int siz = getCharSize(s);
	char m[100];
	for (pos = siz - 1; pos > -1; pos--)
	{
		m[chp] = s[pos];
		chp++;
	}
	for (pos = 0; pos < siz; pos++){
		s[pos] = m[pos];
	}	
    
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
