/**
 * _strlen - finds the length of a string
 * @*s: pointer to the string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return i;
}
