#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_all - sum args
 *@format: the separator
 *Return: the sum
 */
void print_all(const char * const format, ...)
{
	va_list l;
	char *s, *f = (char *) format;
	int pass = 0;

	va_start(l, format);
	while (*f != '\0')
	{
		switch (*f)
		{
		case 's':
			s = va_arg(l, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			printf("%d", va_arg(l, int));
			break;
		case 'c':
			printf("%c", va_arg(l, int));
			break;
		case 'f':
			printf("%f", va_arg(l, double));
			break;
		default:
			pass = 1;
			break;
		}
		f++;
		if (*f != '\0' && pass == 0)
			printf(", ");
		pass = 0;
	}
	va_end(l);
	printf("\n");
}
