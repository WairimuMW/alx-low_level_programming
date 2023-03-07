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
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of @c, NULL otherwise
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: prefix substring
 *
 * Return: number of bytes in the initial segment of @s equal to @accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string whose occurrence will be searched for
 *
 * Return: pointer to byte in @s that matches one of the bytes in @accept, NULL otherwise
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: array
 *
 * Return: none
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 *
 * Return: None
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer
 * @to: character
 *
 * Return: None
 */
void set_string(char **s, char *to);

#endif
