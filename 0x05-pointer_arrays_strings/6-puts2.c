#include "holberton.h"
#include <stdio.h>
int getCharSize(char *s);
/**
 *puts2 - swap values
 *@str: char to size
 */
void puts2(char *str)
{
        
	int pos;
	int siz = getCharSize(str);
      
	for (pos = 0; pos < siz; pos+=2){
		
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
