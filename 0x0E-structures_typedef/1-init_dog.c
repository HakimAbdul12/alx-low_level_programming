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
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
