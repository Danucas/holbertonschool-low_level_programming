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
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = (unsigned int) strlen(str);
	if (len == 0)
		return (NULL);
	buf = malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	while (pos < len + 1)
	{
		buf[pos] = *(str + pos);
		pos++;
	}
	return (buf);
}
