#include <stdio.h>
/**
 *main - prints depends on negative positive or zero
 *Return: 0 for great execution
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x != 8)
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
