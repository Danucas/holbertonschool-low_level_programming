#include "holberton.h"
/**
*print_last_digit - it prints alphabet
*@c: some
*Return: true if lower
*/
int print_last_digit(int c)
{
if (c < 0)
{
c *= -1;
}
_putchar((c % 10) + '0');
return (c % 10);
}
