#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: binary number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of the bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if(index > max)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
