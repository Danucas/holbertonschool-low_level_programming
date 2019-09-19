#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
int i = 25;
while (i > -1)
{
putchar('a' + i);
i--;
}
putchar('\n');
return (0);
}
