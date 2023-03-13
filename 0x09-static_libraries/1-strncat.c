/**
 * *_strncat - concatenates two strings using n bytes from src
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 * @n: number of bytes
 * Return: pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
