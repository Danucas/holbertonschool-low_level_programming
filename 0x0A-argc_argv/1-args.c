#include "holberton.h"
#include <stdio.h>
void arg_count(int argc, char *argv[]);
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	arg_count(argc, argv);
	return (0);
}
/**
 *my_name -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void arg_count(int argc, char *argv[])
{
	if (argc < 0)
                printf("%s", argv[0]);
	printf("%d\n", argc);

}
