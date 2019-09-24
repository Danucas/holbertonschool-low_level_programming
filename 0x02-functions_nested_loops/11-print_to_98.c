#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - it prints alphabet
*@a: input
*/
void print_to_98(int a)
{
int pos;
int add = 1;
if (a > 98)
{
add = -1;
}
for (pos = a; pos > 98 || pos < 98; pos += (add))
{
printf("%d", pos);
if (pos != 98)
{
printf(", ");
}
else
{
break;
}
}
printf("98\n");
}
