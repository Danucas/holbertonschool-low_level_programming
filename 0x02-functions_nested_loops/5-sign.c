#include "holberton.h"
/**                                                                                                                                                                 *print_sign - it prints alphabet                                                                                                                                  *Return: true if lower                                                                                                                                           */
int print_sign(int n)
{
if(n>0){
_putchar('+');
 return (1);
}
else if(n<0)
{
_putchar('-');
 return (-1);
}
else
{
_putchar('0');
 return (0);
}
}
