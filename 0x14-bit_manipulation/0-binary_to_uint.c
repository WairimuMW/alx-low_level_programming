#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, pow = 1;
	unsigned int decimal = 0, err = 0;

	if(b == NULL)
		return (err);

	while(b[len] != '\0') /* string length */
		len++;
	len -= 1;
	
	while(len >= 0) /* iterate from end of string */
	{
		if((b[len] != '0') && (b[len] != '1'))
			return (err);
		if(b[len] == '1') /* assign power of 2 */
			decimal += pow;
		pow *= 2; /* update power of 2 */
		len--;
	}
	return (decimal);
}
