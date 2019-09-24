#include "holberton.h"
/**
 *main - it's is something
 *Return: 0 if it's ok
 */
int main(void)
{
char text[] = "Holberton";
int pos;
for (pos = 0; pos < ((int) sizeof(text) - 1); pos++)
{
_putchar(text[pos]);
}
_putchar('\n');
return (0);
}
