#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initializes structure members to some values
 * @d: is the variable or the name of the structure
 * @name: a member of the struct
 * @age: a member of the struct
 * @owner: a member of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		return (0);
	}
	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		return (0);
	}
	strcpy(d->owner, owner);
}
