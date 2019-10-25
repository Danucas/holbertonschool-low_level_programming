#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_them_all - sum args
 *@separator: the separator
 *@n: dsa
 *Return: the sum
 */
void print_all(const char * const format, ...)
{
	va_list l;
	char *s;
	int j, pass = 0;
	char *f = (char *) format;

	va_start(l, format);
	while(*f != '\0')
	{
		switch (*f)
		{
		case 's':
			s = va_arg(l, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		case 'i':
			j = va_arg(l, int);
			printf("%d", j);
			break;
		case 'c':
			j = (int) va_arg(l, int);
			printf("%c", j);
			break;
		case 'f':
		       
			printf("%f", (float) va_arg(l, double));
			break;
		default:
			pass = 1;
			break;
		}
		f++;
		if (*f != '\0' && pass == 0)
		{
			printf(", ");
		}
		pass = 0;
	}
	va_end(l);
	printf("\n");
}
