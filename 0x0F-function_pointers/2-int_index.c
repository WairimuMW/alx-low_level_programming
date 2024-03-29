#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: function to compare values
 *
 * Return: index of the first element, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if(array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for(i = 0; i < size; i++)
		if(cmp(*(array + i)))
			return (i);

	return (-1);
}
