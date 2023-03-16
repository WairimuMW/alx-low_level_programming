#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size bytes of each element
 *
 * Return: pointer to allocated memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	/* validate input */
	if(nmemb <= 0 || size <= 0)
		return (NULL);

	/* allocate memory and check for error */
	str = malloc(nmemb * size);
	if(str == NULL)
		return (NULL);

	/* set memory to 0 */
	for(i = 0; i < (nmemb * size); i++)
		*((char *)str + i) = 0;

	return (str);
}
