#include "holberton.h"
/**
*_abs - it prints alphabet
*@c: some
*Return: true if lower
*/
int _abs(int c)
{
int ans;
if (c < 0)
{
ans  = (-1) * c;
}
else
{
ans = c;
}
return (ans);
}
