/**
 * prime - recursively divides a number by the highest divisor
 * @n: number to divide
 * @div: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int div)
{
	if(n == div)
		return (1);
	if(n % div == 0)
		return (0);
	return (prime(n, div + 1));
}

/**
 * is_prime_number - checks whether a number is a prime number
 * @n: number to check
 *
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
