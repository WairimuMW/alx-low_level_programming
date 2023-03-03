/**
 * *leet - encodes a string into 1337
 * @*str: pointer of the string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;

	int arr1[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for(i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; arr1[j] != '\0'; j++)
		{
			if(str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
