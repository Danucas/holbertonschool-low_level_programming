#include "holberton.h"
/**
 *more_numbers - print numbers
 */
void more_numbers(void)
{
int p;
int j;
for (j = 0; j < 10; j++)
{
for (p = 0; p < 15; p++)
{
_putchar(p <= 9 ? (p + '0') : ((p / 10) + '0'));
if (p >= 10)
{
_putchar(p % 10 + '0');
}
}
_putchar('\n');
}
}
