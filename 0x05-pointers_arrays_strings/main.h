#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character to standard output
 * @c: character to print to standard output
 */
int _putchar(char c);

/**
 * reset_to_98 - updates value to 98
 * @*n: pointer to an integer
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @*a, @*b: pointers to the integers to be swapped
 */
void swap_int(int *a, int *b);

/**
 * _strlen - finds the length of a string
 * @*s: pointer to the string value to check
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @*str: pointer to the string
 */
void _puts(char *str);

/**
 * print_rev - prints the reverse of a string
 * @*s: pointer to the string
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @*s: pointer to the string
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string
 * @*str: pointer to the string to print
 */
void puts2(char *str);

/**
 * puts_half - prints the second half of a string
 * @*str: pointer to the string
 */
void puts_half(char *str);

/**
 * print_array - prints elements of an array
 * @*a: pointer to the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n);

/**
 * *_strcpy - copies the string pointed to by scr to dest
 * @*dest: pointer to the destination
 * @*src: pointer to the source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src);

#endif
