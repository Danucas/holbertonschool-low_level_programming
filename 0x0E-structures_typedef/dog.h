#ifndef _DOG_H
#define _DOG_H
#include <stdlib.h>
/**
*struct dog - dog object
*@name: his name
*@age:his age
*@owner: i hope it's me
*Description: my little baby awesome dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H */
