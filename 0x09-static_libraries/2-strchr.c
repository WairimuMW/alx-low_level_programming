#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of @c, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	while(*s)
	{
		if(*s == c)
			return (s);
		else
			s++;
	}

	return (NULL);
}
