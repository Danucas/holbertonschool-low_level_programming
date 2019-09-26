#include "holberton.h"
/**
 *print_line - print line
 *@n: length of lines
 */
void print_line(int n)
{
int pos;
if (n > 0)
{
for (pos = 0; pos < n; pos++)
{
_putchar(95);
}
}
_putchar('\n');
}
