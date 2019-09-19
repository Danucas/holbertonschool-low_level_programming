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
while (i < 16)
{
if (i > 9)
{
putchar(i + 87);
}
else
{
putchar(i % 16 + '0');
}
i++;
}
putchar('\n');
return (0);
}
