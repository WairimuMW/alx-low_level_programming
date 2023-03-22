#include <stddef.h>

/**
 * array_iterator - passes the elements of an array through a function
 * @array: array to be iterated through
 * @size: size of the array
 * @action: function that accepts array elements
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array != NULL && action != NULL)
	{
		for(i = 0; i < size; i++)
			action(*(array + 1));
	}
}
