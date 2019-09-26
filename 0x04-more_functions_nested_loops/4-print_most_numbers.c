#include "holberton.h"
/**
 *print_most_numbers - print numbers
 */
void print_most_numbers(void)
{
int p;
for (p = 0; p < 10; p++)
{
if (p != 4 && p != 2)
{
_putchar(p + '0');
}
}
_putchar('\n');
}
