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
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);
	char *m = (char *) l;
	m--;
	printf("Why does'nt work\n");
	printf("string %c\n", *m);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL || *s == '\0')
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
