#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - checked for allocation
 *@b: lenght
 *Return: 0 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);
	if (checked == NULL)
		exit(98);
	return (checked);
}
