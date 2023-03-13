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

/**
 * *strcpy - copies the string pointed to by src to dest
 * @*dest: pointer to the destination
 * @*src: pointer to the source string
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
        	dest[i] = src[i];
	
	return (dest);
}
