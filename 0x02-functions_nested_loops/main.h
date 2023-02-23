#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);


/**
 * print_alphabet - prints lowercase alphabet
 */

void print_alphabet(void);


/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 */

void print_alphabet_x10(void);


/**
 * _islower - checks for lowercase letters
 * @c: the character to check
 * Return: int
 */

int _islower(int c);


/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if alphabet character, 0 if otherwise
 */

int _isalpha(int c);


/**
 * print_sign - prints sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */

int print_sign(int n);


/**
 * _abs - computes absolute value of integer
 * @int: integer argument
 * Return: absolute value
 */

int _abs(int);


/**
 * print_last_digit - prints the last digit of integer
 * @int: integer argument
 * Return: last digit of number
 */

int print_last_digit(int);


/**
 * jack_bauer - prints every minute of a day
 * Description: prints from 00:00 to 23:59
 */

void jack_bauer(void);


/**
 * times_table - prints multiplication table
 */

void times_table(void);


/**
 * add - adds two integers
 * @int: first integer argument
 * @int: second integer argument
 * Return: sum
 */

int add(int, int);


/**
 * print_to_98 - prints numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);


/**
 * print_times_table - prints multiplication table fro 0 to n
 * @n: integer argument
 */

void print_times_table(int n);


#endif
