#include "holberton.h"
/**
*print_last_digit - it prints alphabet
*@c: some
*Return: true if lower
*/
int print_last_digit(int c)
{
int result;
if (c < 0)
{
c *= -1;
}
if (c > 0)
{
result = c % 10;
}
else
{
result = 0;
}

_putchar(result + '0');
return (result % 10);
}
