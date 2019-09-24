#include "holberton.h"
/**
  *int_islower- it prints alphabet
  *Return: true if lower
 */
int _isalpha(int c)
{

  if ((c >= 97 && c <= 123) ||(c >= 65 && c<=91))
{
return (1);
}
else
{
return (0);
}
}
