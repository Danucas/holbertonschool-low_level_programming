#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *puts_half - swap values
 *@str: char to size
 */
void puts_half(char *str)
{
        
	int pos;
	int siz = getCharSize(str);
      
	for (pos = siz / 2; pos < siz; pos++){
		
		_putchar(str[pos]);
	}	
	_putchar('\n');
    
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
