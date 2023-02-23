#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, tri;

	if(size > 0)
	{
		for(i = 1; i <= size; i++)
		{
			for(j = 1; j <= (size - i); j++)
				_putchar(' ');

			for(tri = 1; tri <= i; tri++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
