#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog variable
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
