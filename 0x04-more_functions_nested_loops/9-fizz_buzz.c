#include <stdio.h>
/**
 *fizz_buzz - print line
 */
void fizz_buzz(void)
{
int pos;
for (pos = 1; pos <= 100; pos++)
{
if ((pos % 3 == 0 && !(pos % 5 == 0)))
{
printf("Fizz");
}
else if ((pos % 5 == 0 && !(pos % 3 == 0)))
{
printf("Buzz");
}
else if ((pos % 5 == 0 && pos % 3 == 0))
{
printf("FizzBuzz");
}
else
{
printf("%d", pos);
}
if (pos != 100)
{
printf(" ");
}
}
printf("\n");
}
/**
 *main - initiatl function
 *Return: always 0
 */
int main(void)
{
fizz_buzz();
return (0);
}
