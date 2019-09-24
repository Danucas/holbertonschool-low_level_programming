#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
int x;
int y;
int c[90][2];
 int length = 0;
for(x = 0; x < 10; x++)
{
  for(y = 0; y < 10; y++)
    {
      if(x != y){
	c[length]  = {{x}, {y}};
	putchar('0' + x);
	putchar('0' + y);
}
}
}

putchar('\n');
return (0);
}
