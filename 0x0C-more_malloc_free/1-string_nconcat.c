#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @str: string to check
 *
 * Return: length of @str
 */
int _strlen(char *str)
{
	int len;

	for(len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of @s2
 *
 * Return: pointer to concatenated string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int num, length, i, j;
	num = n;

	/* account for NULL strings */
	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";

	/* negative n bytes */
	if(num < 0)
		return (NULL);

	/* n greater or equal to length of s2 */
	if(num >= _strlen(s2))
		num = _strlen(s2);

	/* length of result string */
	length = _strlen(s1) + num + 1;

	/* allocate memory and check for error */
	str = malloc(sizeof *str * length);
	if(str == NULL)
		return (NULL);

	/* concatenate */
	for(i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for(j = 0; j < num; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
