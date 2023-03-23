#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * _char - prints a character
 * @arg_list: argument list
 * 
 * Return: None
 */
void _char(va_list arg_list)
{
    	printf("%c", va_arg(arg_list, int));
}

/**
 * _int - prints an integer
 * @arg_list: argument list
 *
 * Return: None
 */
void _int(va_list arg_list)
{
    	printf("%d", va_arg(arg_list, int));
}

/**
 * _float - prints a float
 * @arg_list: argument list
 *
 * Return: None
 */
void _float(va_list arg_list)
{
    	printf("%f", va_arg(arg_list, double));
}

/**
 * _string - prints a string
 * @arg_list: argument list
 *
 * Return: None
 */
void _string(va_list arg_list)
{
    	char *s;

    	s = va_arg(arg_list, char *);
    	if (s == NULL)
    	{
        	printf("(nil)");
        	return;
    	}
    	printf("%s", s);
}

/**
 * print_all - prints integers, characters, floats or strings
 * @format: types of arguments passed
 *
 * Return: None
 */
void print_all(const char *const format, ...)
{
    	char *separator = "";
    	int i, j = 0;
    	va_list arg_list;

    	dtype option[] = {{'c', _char},
                     	 {'i', _int},
                     	 {'f', _float},
                     	 {'s', _string},
                     	 {'\0', NULL}};

   	va_start(arg_list, format);
    	while (format != NULL && format[j] != '\0')
    	{
        	i = 0;
        	while (option[i].symbol != '\0')
        	{
            		if (option[i].symbol == format[j])
            		{
                		printf("%s", separator);
                		option[i].f(arg_list);
                		separator = ", ";
            		}
            		i++;
        	}
        	j++;
    	}
    	va_end(arg_list);
    	printf("\n");
}
