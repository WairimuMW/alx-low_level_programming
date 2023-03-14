#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int new_strlen;
	int s1len = 0;
	int s2len = 0;
	int i = 0;
	int j = 0;

	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";

	while(s1[s1len])
		s1len++;
	while(s2[s2len])
		s2len++;

	new_strlen = s1len + s2len;

	new_str = malloc((new_strlen + 1) * sizeof(char));
	if(new_str == NULL)
		return (NULL);

	while(i < s1len)
	{
		new_str[i] = s1[i];
		i++;
	}
	while(i <= new_strlen)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}
