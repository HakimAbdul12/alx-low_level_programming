#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog
 * @name: a member of the structure
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = strdup(name);
	ptr->owner = strdup(owner);
	ptr->age = age;
	return (ptr);
}
