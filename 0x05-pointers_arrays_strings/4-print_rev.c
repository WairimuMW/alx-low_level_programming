#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @*s: pointer to the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	while (*s != '\0')
	{
		++length;
		++s;
	}
	for (i = length; i >= 0; --i)
	{
		_putchar(*(s));
		--s;
	}
	_putchar('\n');
}  

