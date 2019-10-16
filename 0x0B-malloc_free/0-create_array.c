#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - sdfsdf
 *@size: size to create
 *@c: char to fill
 *Return: pointer to new char
 */
char  *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int pos = 0;

	if (size == 0)
		return (NULL);
	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		return (NULL);
	while (pos < size)
	{
		buf[pos] = c;
		pos++;
	}
	return (buf);
}
