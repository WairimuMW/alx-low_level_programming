#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to binary number
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max, mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if(index > max)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);
	return (1);
}
