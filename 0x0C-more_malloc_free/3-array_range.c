#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lower range
 * @max: upper range
 *
 * Return: pointer to new array, NULL otherwise
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size = max - min + 1;

	/* validate input */
	if(min > max)
		return (NULL);

	/* allocate memory and check for error */
	arr = malloc(sizeof(int) * size);
	if(arr == NULL)
		return (NULL);

	/* set values */
	for(i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
