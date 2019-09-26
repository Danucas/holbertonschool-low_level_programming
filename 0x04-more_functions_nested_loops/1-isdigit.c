#include "holberton.h"
/**
 *_isdigit - tells if it is digit
 *@c: input to check
*Return: something
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
