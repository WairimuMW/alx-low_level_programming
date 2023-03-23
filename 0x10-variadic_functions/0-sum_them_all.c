#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 * @n: number of integers to add
 * 
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    	/* declaring pointer to argument list */
    	va_list arg_list;
    	unsigned int i, sum = 0;

    	/* validate arg_list and initialize it */
    	if (n == 0)
        	return (0);
    	va_start(arg_list, n);

    	/* iterate through list */
    	for (i = 0; i < n; i++)
        	sum += va_arg(arg_list, int);
    	va_end(arg_list);
    	return (sum);
}
