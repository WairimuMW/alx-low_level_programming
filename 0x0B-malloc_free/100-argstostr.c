#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: string variable
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while(*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, length = 0, k = 0;

	if(ac == 0 || av == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
		length += _strlen(av[i]);
	length += (ac + 1);

	str = malloc(length * sizeof(char));
	if(str == NULL)
	{
		free(str);
		return (NULL);
	}

	for(i = 0; i < ac; i++)
	{
		for(j = 0; j < _strlen(av[i]); j++)
				str[k++] = av[i][j];
		str[k++] = '\n';
	}
	return (str);
}
