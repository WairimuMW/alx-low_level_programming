#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times _ should be printed
 */

void print_diagonal(int n)
{
	int line, space;

	if(n > 0)
	{
		for(line = 1; line <= n; line++)
		{
			for(space = 1; space < line; space++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
