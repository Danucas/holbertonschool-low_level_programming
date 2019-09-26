#include "holberton.h"
/**
 *print_square - print line
 *@n: length of lines
 */
void print_square(int n)
{
int pos;
int spos;
if (n > 0)
{
for (pos = 0; pos < n; pos++)
{
for (spos = 0; spos < n; spos++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
