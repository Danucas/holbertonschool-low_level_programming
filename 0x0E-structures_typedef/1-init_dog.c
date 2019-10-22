#include "dog.h"
/**
 *init_dog - initialize a dog
 *@d: the object
 *@name: the name
 *@age: old
 *@owner: me
 *Description: smiley
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != null)
		*d = (typeof(*d)){.name = name, .age = age, .owner = owner};
}
