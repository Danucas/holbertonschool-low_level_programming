#include "holberton.h"
/**
  *_isalpha- it prints alphabet
  *@c: input var
  *Return: true if lower
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
{
return (1);
}
else
{
return (0);
}
}
