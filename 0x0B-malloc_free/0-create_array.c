#include <stdio.h>
#include <stdlib.h>

char  *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int pos = 0;

	if (size == 0)
		return (NULL);
	buf = malloc(sizeof(char) * size);
	while (pos < size)
	{
		buf[pos] = c;
		pos++;
	}
	return (buf);
}
