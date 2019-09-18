#include <stdio.h>
/**
*main - something
*Return: something
*/
int main(void)
{
char c;
int i;
double d;
long int li;
long long int lli;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of a int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d bytes(s)\n", sizeof(lli));
printf("Size of a float: %d bytes(s)\n", sizeof(f));
return (0);
}
