#include <stdio.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y && ((x % 10) < y % 10))
			{
				putchar('0' + (x / 10));
				putchar('0' + (x % 10));
				putchar(' ');
				putchar('0' + (y / 10));
				putchar('0' + (y % 10));
				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
