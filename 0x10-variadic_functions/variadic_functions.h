#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
 * struct dt - struct
 * @symbol: letter signifying data type
 * @f: function pointer
 */
typedef struct dt
{
    char symbol;
    void (*f)(va_list);
} dtype;

#endif
