#include "holberton.h"
#include <stdio.h>
void arg_print(int argc, char *argv[]);
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	arg_print(argc, argv);
	return (0);
}
/**
 *my_name -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void arg_print(int argc, char *argv[])
{
	int pos;

	for (pos = 0; pos < argc; pos++)
	{
		printf("%s\n", argv[pos]);
	}

}
