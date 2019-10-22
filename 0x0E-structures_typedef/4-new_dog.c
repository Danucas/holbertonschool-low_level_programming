#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - print a dog
 *@name: th dog
 *@age: som age
 *@owner: some owner
(* a blank line
*Description: smiley is my dog my dog)?
(* section header: header of this dog is dog.h)*
 *Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *na, *ow;
	int nl = 0, ol = 0;
	dog_t *newd;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	while (*(name + nl) != '\0')
		nl++;
	na = malloc((nl + 1) * sizeof(char));
	if (na == NULL)
	{
		free(newd);
		return (NULL);
	}
	while (*(owner + ol) != '\0')
		ol++;
	ol++;
	ow = malloc(ol * sizeof(char));
	if (ow == NULL)
	{
		free(newd);
		free(na);
		return (NULL);
	}
	for (nl = 0; name[nl] != '\0'; nl++)
		na[nl] = name[nl];
	na[nl] = '\0';
	for (ol = 0; owner[ol] != '\0'; ol++)
		ow[ol] = owner[ol];
	ow[ol] = '\0';
	newd->name = na;
	newd->age = age;
	newd->owner = ow;
	return (newd);
}
