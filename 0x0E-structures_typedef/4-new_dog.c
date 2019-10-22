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
	dog_t newd;
	dog_t *p;

	if (name == NULL)
		return (NULL);
	while (*(name + nl) != '\0')
	{
		nl++;
	}
	nl++;
	while (*(owner + ol) != '\0')
	{
		ol++;
	}
	ol++;
	na = malloc(nl * sizeof(char));
	if (na == NULL)
		return (NULL);
	nl = 0;
	while (name[nl] != '\0')
	{
		na[nl] = name[nl];
		nl++;
	}
	na[nl] = '\0';
	ow = malloc(ol * sizeof(char));
	if (ow == NULL)
		return (NULL);
	ol = 0;
	while (owner[ol] != '\0')
	{
		ow[ol] = owner[ol];
		ol++;
	}
	ow[ol] = '\0';
	newd.name = na;
	newd.age = age;
	newd.owner = ow;
	p = &newd;
	return (p);
}
