/**
 * square - finds the square root of a number
 * @n: number to check
 * @i: smallest possible square root of @n
 *
 * Return: natural square root of @n, -1 otherwise
 */
int square(int n, int i)
{
	if((i * i) > n)
		return (-1);
	if((i * i) == n)
		return (i);
	return (square(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to check
 *
 * Return: natural square root of @n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if(n < 0)
		return (-1);
	return (square(n, 0));
}
