#include "main.h"

/*
 * print_times_table - function that prints the n times table
 * Return: None
 */

void print_times_table(int n)
{
	int i, j, product;
	if(n >= 0 && n <= 15)
	{
		for(i = 0; i <= n; i++)
        	{
                	for(j = 0; j <= n; j++)
                	{
                        	product = i * j;

                        	if (j == 0)
                        	{
                                	_putchar('0' + product);
                        	}
                      		else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
                	}
                	_putchar('\n');
        	}
	}
}
