#include "holberton.h"
/**
 *print_diagonal - print line
 *@n: length of lines
 */
void print_diagonal(int n)
{
int pos;
int spos;
if (n > 0)
{
for (pos = 0; pos < n; pos++)
{
for (spos = 0; spos < pos ; spos++)
{
_putchar(32);
}

_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
