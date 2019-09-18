#include <stdio.h>
/**
*main - something
*
*Return: something
*
*/

int main(void)
{
typedef int d;
d ch = sizeof(char), in = sizeof(int), li = sizeof(long), lli = sizeof(long long), f = sizeof(float);
printf("Size of a char: %d byte(s)\n", ch);
printf("Size of a int: %d byte(s)\n", in);
printf("Size of a long int: %d byte(s)\n", li);
printf("Size of a long long int: %d byte(s)\n", lli);
printf("Size of a float: %d byte(s)\n", f);
return (0);
}
