#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int len = 0;

	if(n == 0)
		_putchar('0');

	while(num >0)
	{
		len++;
		num >>= 1;
	}

	len -= 1;

	while(len >= 0)
	{
		if((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
