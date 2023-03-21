#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - finds the length of a string
 * @str: string to check
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len;
	for(len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for(i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;
	char *name_copy;
	char *owner_copy;

	a_dog = malloc(sizeof(dog_t));
	if(a_dog == NULL)
		return (NULL);

	a_dog->age = age;

	/* create copies of name and owner */
	if(name != NULL)
	{
		name_copy = malloc(_strlen(name) + 1);
		if(name_copy == NULL)
		{
			free(a_dog);
			return (NULL);
		}
		a_dog->name = _strcpy(name_copy, name);
	}
	else
		a_dog->name = NULL;

	if(owner != NULL)
	{
		owner_copy = malloc(_strlen(owner) + 1);
		if(owner_copy == NULL)
		{
			free(name_copy);
			free(a_dog);
			return (NULL);
		}
		a_dog->owner = _strcpy(owner_copy, owner);
	}
	else
		a_dog->owner = NULL;

	return (a_dog);
}
