#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string whose occurrence will be searched for
 *
 * Return: pointer to byte in @s that matches one of the bytes in @accept, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
		for(i = 0; accept[i]; i++)
		{
			if(*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
