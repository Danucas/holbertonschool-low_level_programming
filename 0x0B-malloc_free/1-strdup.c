#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - fdsf
 *@str: string
 *Return: char array pointer
 */
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
	buf = malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	while (pos < len)
	{
		buf[pos] = *(str + pos);
		pos++;
	}
		     buf[pos] = '\0';
	return (buf);
}
