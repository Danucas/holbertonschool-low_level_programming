#include "holberton.h"
/**
*jack_bauer - it prints alphabet
*Return: true if lower
*/
void jack_bauer(void)
{
int hours;
int minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
int hdone = hours / 10;
int hdtwo = hours % 10;
int mindone = minutes / 10;
int mindtwo = minutes % 10;
_putchar('0' + hdone);
_putchar('0' + hdtwo);
_putchar(58);
_putchar('0' + mindone);
_putchar('0' + mindtwo);
_putchar('\n');
}
}
}
