#include <stdio.h>
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	int pos;

	for (pos = 0; pos < argc; pos++)
	{
		printf("%s\n", argv[pos]);
	}
	return (0);
}
