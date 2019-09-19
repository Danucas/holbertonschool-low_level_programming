#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i % 10 + '0');
i++;
}
putchar('\n');
return (0);
}
