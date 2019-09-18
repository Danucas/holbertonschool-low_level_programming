#include <stdio.h>
/**
*main - something
*
*Return: something
*
*/

int main(void)
{
int ch = sizeof(char);
int  in = sizeof(int);
int li = sizeof(long);
int lli = sizeof(long long);
int f = sizeof(float);
printf("Size of a char: %d byte(s)\n", ch);
printf("Size of an int: %d byte(s)\n", in);
printf("Size of a long int: %d byte(s)\n", li);
printf("Size of a long long int: %d byte(s)\n", lli);
printf("Size of a float: %d byte(s)\n", f);
return (0);
}
