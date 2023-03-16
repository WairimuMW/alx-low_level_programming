#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: byte size to allocate
 *
 * Return: pointer to allocated memory, 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if(ptr == NULL)
		exit(98);

	return (ptr);
}
