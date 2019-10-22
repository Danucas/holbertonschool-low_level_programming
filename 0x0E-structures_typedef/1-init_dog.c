#include "dog.h"
/**
 *init_dog - initialize a dog
 *@d: the object
 *@name: the name
 *@age: old
 *@owner: me
(* a blank line
*Description: smiley is my dog my dog)?
(* section header: the header is dog.h)*
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		*d = (typeof(*d)){.name = name, .age = age, .owner = owner};
}
