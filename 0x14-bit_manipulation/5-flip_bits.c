#include "main.h"

/**
 * flip_bits - gets the number of bits you would flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	diff = n ^ m; /* XOR to show bit 1 */

	do{
		diff_bits += (diff & 1);
		diff >>= 1;
	}while(diff > 0);

	return (diff_bits);
}
