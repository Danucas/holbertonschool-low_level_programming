#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
char alpha = 'a';
int i = 0;
int act;
while (i < 26)
{
act = alpha + i;
if (act != 'q' && act != 'e')
{
putchar(act);
}
i++;
}
putchar('\n');
return (0);
}
