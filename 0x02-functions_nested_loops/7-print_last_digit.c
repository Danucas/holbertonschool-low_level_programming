#include "holberton.h"
/**
*print_last_digit - it prints alphabet
*@c: some
*Return: true if lower
*/
int print_last_digit(int c)
{
int result;
result = c % 10;
if (result < 0)
{
result *= -1;
}
_putchar(result + '0');
return (result % 10);
}
