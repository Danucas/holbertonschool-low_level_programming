#include "holberton.h"
/**
 *print_triangle - print line
 *@n: length of lines
 */
void print_triangle(int n)
{
int pos;
int spos;
if (n > 0)
{
for (pos = 0; pos < n; pos++)
{
for (spos = 0; spos < n; spos++)
{
if (spos >= (n - pos) - 1)
{
_putchar(35);
}
else
{
_putchar(32);
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
