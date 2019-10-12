#include "holberton.h"
#include <stdio.h>
void my_name(int argc, char *argv[]);
/**
 *main - que tal esto
 *@argc: agrcount
 *@argv: arg list
 *Return: 0 if todo esta good
 */
int main(int argc, char *argv[])
{
	my_name(argc, argv);
	return (0);
}
/**
 *my_name -dsf
 *@argc: args count
 *@argv: 0 if todo esta good
*/
void my_name(int argc, char *argv[])
{
	if (argc > 1)
                printf("%d", argc);
	printf("%s\n", argv[0]);

}
