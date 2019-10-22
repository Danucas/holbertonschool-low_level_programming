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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H */
