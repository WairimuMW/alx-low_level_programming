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
 * *_strcat - concatenates two strings
 * @*dest: pointer to destination string
 * @*src: source string
 * Return: pointer to result
 */
char *_strcat(char *dest, char *src);

/**
 * *_strncat - concatenates two strings using n bytes from src
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 * @n: number of bytes
 * Return: pointer to the result
 */
char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - copies a string
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 * @n: integer
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @*s1, @*s2: pointers to strings to be compared
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @*a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n);

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @*: pointer to the string
 */
char *string_toupper(char *);

/**
 * *cap_string - capitalizes all words of a string
 * @*:pointer to the string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *);

/**
 * *leet - encodes a string into 1337
 * @*: pointer of the string to encode
 * Return: encoded string
 */
char *leet(char *);

/**
 * *rot13 - encodes a string using rot13
 * @*: string to encode
 * Return: encoded string
 */
char *rot13(char *);

#endif
