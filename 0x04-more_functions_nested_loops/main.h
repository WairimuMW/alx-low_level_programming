#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character to standard output
 * @c: character to print to standard output
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 */

int _isupper(int c);


/**
 * _isdigit - checks for a digit, 0 through 9
 * @c: character to check
 */

int _isdigit(int c);


/**
 * mul - multiplies 2 integers
 * a, b: integers to be multiplied
 */

int mul(int a, int b);


/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void);


/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void);


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void);


/**
 * print_line - draws a straight line in the terminal
 * @n: number of times _ should be printed
 */

void print_line(int n);


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 */

void print_diagonal(int n);


/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size);


/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size);

#endif
