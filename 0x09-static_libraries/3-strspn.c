/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: prefix substring
 *
 * Return: number of bytes in the initial segment of @s equal to @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] != 32)
		{
			for(j = 0; accept[j] != '\0'; j++)
			{
				if(s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}

	return (count);
}
