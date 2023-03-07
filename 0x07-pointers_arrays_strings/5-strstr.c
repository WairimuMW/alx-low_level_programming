#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the substring, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int c = 0;

	while(needle[c] != '\0')
		c++;

	while(*haystack)
	{
		for(i = 0; needle[i]; i++)
		{
			if(haystack[i] != needle[i])
				break;
		}
		if(i != c)
			haystack++;
		else
			return (haystack);
	}

	return (NULL);
}
