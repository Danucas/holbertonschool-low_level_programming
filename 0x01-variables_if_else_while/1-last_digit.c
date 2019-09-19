#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
int n;
int compn;
char head[] = "Last digit of";
char *tail;
srand(time(0));
n = rand() - RAND_MAX / 2;
compn = n % 10;
if (n > 5)
{
tail = "and is grater than 5";
}
if (n == 0)
{
tail = "and is 0";
}
if (n < 5)
{
tail = "and is less than 6 and not 0";
}
printf("%s %d is %d %s\n", head, n, compn, tail);
return (0);
}
