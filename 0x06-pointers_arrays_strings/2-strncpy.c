/**
 * *_strncpy - copies a string
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 * @n: integer
 * Return: pointer to the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);

	while(i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
