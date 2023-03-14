#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to be copied
 *
 * Return: pointer to the duplicate string, otherwise NULL
 */
char *_strdup(char *str)
{
	char *dupe_str;
	int size = 0;
	int i = 0;

	if(str == NULL)
		return (NULL);

	while(str[size])
		size++;

	dupe_str = malloc((size + 1) * sizeof(char));
	if(dupe_str == NULL)
		return (NULL);

	while(str[i])
	{
		dupe_str[i] = str[i];
		i++;
	}

	dupe_str[i + 1] = 0;
	return (dupe_str);
}
