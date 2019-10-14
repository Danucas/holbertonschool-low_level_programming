#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char  *str_concat(char *s1, char *s2)
{
	char *buf;
	unsigned int pos = 0;
	unsigned int len = 0;
	unsigned int f = 0;

	while (pos != INT_MAX)
	{
		if (f == 0)
		{
			if (*(s1 + pos) == '\0')
			{
				f = len;
				pos = 0;

			}
			else
				pos++;
		}
		else if(f != 0)
		{
			if (*(s2 + pos) != '\0')
				pos++;
		        else
			{
				break;
			}
		}
		len++;
	}
	//printf("%u", len);
	if (len == 0)
		return (NULL);
	buf = malloc(sizeof(char) * len);
	pos = 0;
	while (pos < len)
	{
//		printf("%d", pos);
		if (pos < f)
			buf[pos] = *(s1 + pos);
		else
			buf[pos] = *(s2 + (pos -f));
		pos++;
	}
	buf[pos] = '\0';
//	printf("%s", buf);
	return (buf);
}
