#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to binary number
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if(index > max)
		return (-1);

	mask <<= index;
	*n = (*n | mask);
	return (1);
}
