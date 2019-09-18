#include <unistd.h>
/**
*main - this file prints a lot of things
*Return: 1 for error
*/
int main(void)
{
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, a, sizeof(a) - 1);
return (1);
}
