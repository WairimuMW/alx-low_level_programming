#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * @size: size of array to be created
 * @c: character to initialize the array
 *
 * Return: pointer to the array, NULL if size is 0 or error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if(size == 0 || s == NULL)
		return (NULL);

	while(i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
