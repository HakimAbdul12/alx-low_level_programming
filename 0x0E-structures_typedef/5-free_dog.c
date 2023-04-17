#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - free the dogs
 * @d: is the pointer to the structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
