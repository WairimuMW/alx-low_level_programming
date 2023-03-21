#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to struct dog
 * @d: instance of struct dog
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
	if(d == NULL)
		return;
	if(d->name)
		free(d->name);
	if(d->owner)
		free(d->owner);
	free(d);
}
