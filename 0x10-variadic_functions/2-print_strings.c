#include <stdarg.h>
#include <stdio.h> 
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of arguments
 * 
 * Return: None
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    	va_list arg_list;
    	unsigned int i;
    	char *s;

    	if (n > 0)
    	{
        	va_start(arg_list, n);
        	for (i = 1; i <= n; i++)
        	{
            		s = va_arg(arg_list, char *);
            		if (s == NULL)
                		printf("(nil)");
            		else
                		printf("%s", s);

            		if (i != n && separator != NULL)
                		printf("%s", separator);
        	}
        	va_end(arg_list);
    	}
    	printf("\n");
}
