#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: None
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: None
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - finds the length of a string
 * @s: string to check
 *
 * Return: length of string @s
 */
int _strlen_recursion(char *s);

/**
 * factorial - finds the factorial of a number
 * @n: number to check
 *
 * Return: factorial of @n
 */
int factorial(int n);

/**
 * _pow_recursion - finds the result of a number raised to a power
 * @x: number to be raised
 * @y: power
 *
 * Return: @x raised to power @y
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to check
 *
 * Return: natural square root of @n, -1 otherwise
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - checks whether a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n);

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s);

#endif
