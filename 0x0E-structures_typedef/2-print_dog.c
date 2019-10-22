#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - print a dog
 *@d: th dog
(* a blank line
*Description: smiley is my dog my dog)?
(* section header: header of this dog is dog.h)*
 *Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
