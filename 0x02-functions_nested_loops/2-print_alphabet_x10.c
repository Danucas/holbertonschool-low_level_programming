#include "holberton.h"
/**
  *print_alphabet_x10 - it prints alphabet
 */
void print_alphabet_x10(void)
{
int ch;
int times;
for (times = 0; times < 10; times++)
{
for (ch = 97; ch < 123; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
