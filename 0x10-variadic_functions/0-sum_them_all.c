#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sum args
 *@n: dsa
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	int res = 0;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		res += va_arg(l, int);
	}
	va_end(l);
	if (n == 0)
		return (0);
	else
		return (res);
}
