#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - print a dog
 *@d: th dog
(* a blank line
*Description: smiley is my dog my dog)?
(* section header: header of this dog is dog.h)*
 *Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
