/**
 * rev_string - reverses a string
 * @*s: pointer to the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, length;
	char *begin, *end, temp;

	begin = s;
	end = s;
	length = 0;
        while (*s != '\0')
        {
                ++length;
                ++s;
        }
	for(i = 0; i < (length - 1); i++)
		end++;
	for(i = 0; i < length/2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
