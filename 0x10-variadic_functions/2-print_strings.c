#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - sum args
 *@separator: the separator
 *@n: dsa
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
