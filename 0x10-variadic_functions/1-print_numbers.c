#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * 
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    	va_list arg_list;
    	unsigned int i;

    	if (n > 0)
    	{
        	va_start(arg_list, n);
        	for (i = 1; i <= n; i++)
        	{
            		printf("%d", va_arg(arg_list, int));
            		if (i != n && separator != NULL)
                		printf("%s", separator);
        	}
        	va_end(arg_list);
    	}
    	printf("\n");
}
