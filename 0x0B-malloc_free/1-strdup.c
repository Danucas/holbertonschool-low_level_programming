#include <stdio.h>
#include <stdlib.h>

char  *_strdup(char *str)
{
	char *buf;
	unsigned int pos = 0;
	unsigned int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len == 0)
		return (NULL);
	buf = malloc(sizeof(char) * len);
	while (pos < len)
	{
		buf[pos] = *(str + pos);
		pos++;
	}
	return (buf);
}
