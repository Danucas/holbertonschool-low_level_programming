#include <stdio.h>
#include <math.h>
/**
 *get_prime_numbers - print line
 *@a: number to check
 */
void get_prime_numbers(long a)
{
	int pos;

	while (a % 2 == 0)
	{
		printf("%d ", 2);
		a = a / 2;
	}

	for (pos = 3; pos <= sqrt(a); pos += 2)
	{
		while (a % pos == 0)
		{
			printf("%d ", pos);
			a = a / pos;
		}
	}
	if (a > 2)
		printf("%d ", (int) a);
}
/**
 *main - initiatl function
 *Return: always 0
 */
int main(void)
{
	get_prime_numbers(612852475143);
	return (0);
}
