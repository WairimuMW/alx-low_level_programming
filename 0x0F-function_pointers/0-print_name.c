#include <stddef.h>

/**
 * print_name - calls a function that prints the name passed
 * @name: name passed to the function
 * @f: function that prints the name
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f != NULL)
		f(name);
}
