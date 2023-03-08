/**
 * compare - compares the beginning and end of a string
 * @first: beginning of string
 * @last: end of string
 *
 * Return: 1 if similar, 0 otherwise
 */
int compare(char *first, char *last)
{
	if(first >= last)
		return (1);
	if(*first == *last)
		return (compare(first + 1, last - 1));
	return (0);
}

/**
 * _strlen_recursion - finds the length of a string
 * @s: string to check
 *
 * Return: length of string @s
 */
int _strlen_recursion(char *s)
{
        if(*s == '\0')
                return (0);
        return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return (compare(s,(s + (length - 1))));
}
